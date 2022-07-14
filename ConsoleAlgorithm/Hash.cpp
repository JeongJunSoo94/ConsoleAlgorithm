#include "Hash.h"
#include <iostream>
static int hash(int key, int size)
{
    if (size == 0)
    {
        return key;
    }
    return key % size;
}

static void SetNode(Node* n, Member* x, Node* next)
{
    n->data = *x;
    n->next = next;
}

int Hash::Initialize(Hash* h, int size)
{
    if ((h->table = new Node*) == NULL)
    {
        h->size = 0;
        return 0;
    }
    h->size = size;
    for (int i = 0; i < size; i++)
    {
        h->table[i]=NULL;
    }
    return 1;
}

Node* Hash::Search(Hash* h, Member* x)
{
    int key = hash(x->no, h->size);
    Node* p = h->table[key];

    while (p != nullptr)
    {
        if (p->data.no == x->no)
            return p;
        p = p->next;
    }
    return nullptr;
}

int Hash::Add(Hash* h,  Member* x)
{
    int key = hash(x->no, h->size);
    Node* p = h->table[key];
    Node* temp;
    while (p != nullptr)
    {
        if (p->data.no == x->no)
            return 1;
        p = p->next;
    }
    if ((temp = new Node()) == nullptr)
    {
        return 2;
    }
    SetNode(temp, x, h->table[key]);
    h->table[key] = temp;
    return 0;
}

int Hash::Remove(Hash* h,  Member* x)
{
    int key = hash(x->no, h->size);
    Node* p = h->table[key];
    Node** pp = &h->table[key];
    while (p != nullptr)
    {
        if (p->data.no == x->no)
        {
            *pp = p->next;
            delete p;
            return 0;
        }
        pp = &p->next;
        p = p->next;
    }
    return 1;
}

void Hash::Dump(Hash* h)
{
    for (int i = 0; i < h->size; i++)
    {
        Node* p = h->table[i];
        std::cout << i;
        while (p != nullptr)
        {
            std::cout << p->data.no << p->data.name;
            p = p->next;
        }
        std::cout << std::endl;
    }
}

void Hash::Clear(Hash* h)
{
    for (int i = 0; i < h->size; i++)
    {
        Node* p = h->table[i];
        while (p != nullptr)
        {
            Node* next = p->next;
            delete p;
            p = next;
        }
        h->table[i] = nullptr;
    }
}

void Hash::Terminate(Hash* h)
{
    Clear(h);
    delete h->table;
    h->size=0;
}
