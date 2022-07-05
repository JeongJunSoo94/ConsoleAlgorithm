#include "LinkedLIst.h"
#include <iostream>
LinkedLIst::LinkedLIst()
{
}

LinkedLIst::~LinkedLIst()
{
}

Node* LinkedLIst::CreateNode()
{
    Node* newNode = new Node();
    return newNode;
}

int compare(int a, int b)
{
    return a == b ? 0 : a > b ? 1 : -1;

}

void LinkedLIst::SetNode(Node* n, const Member* x, Node* next)
{
    n->data = *x;
    n->next = next;
}

Node* LinkedLIst::search(LinkedLIst* list, const Member* x, int compare(const Member* x, const Member* y))
{
    Node* ptr = list->head;
    while (ptr != nullptr)
    {
        if (compare(&ptr->data, x) == 0)
        {
            list->curr = ptr;
            return ptr;
        }
        ptr = ptr->next;
    }
    return nullptr;
}

void LinkedLIst::InsertFront(LinkedLIst* list, const Member* x)
{
    if (list->head == nullptr)
    {
        Node* newNode = CreateNode();
        SetNode(newNode, x, head);
        head = newNode;
    }
    else
    {
        Node* newNode = CreateNode();
        SetNode(newNode, x, head);
        head = newNode;
        Node* ptr = list->head;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        list->curr = ptr;
    }
}

void LinkedLIst::InsertPriority(LinkedLIst* list, const Member* x)
{
    Node* newNode = CreateNode();
    
    if (head == NULL)
    {
        SetNode(newNode, x, head);
        head = newNode;
    }
    else if (newNode->data.no <= head->data.no)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        while (1)
        {
            if (curr->next == NULL)
            {
                curr->next = newNode;
                break;
            }
            else if (newNode->data.no < curr->next->data.no)
            {
                newNode->next = curr->next;
                curr->next = newNode;
                break;
            }
            curr = curr->next;
        }
    }
}

void LinkedLIst::InsertRear(LinkedLIst* list, const Member* x)
{
    if (list->head == nullptr)
    {
        InsertFront(list, x);
    }
    else
    {
        Node* ptr = list->head;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = list ->curr = CreateNode();
        SetNode(ptr->next, x, nullptr);
    }
    
}

void LinkedLIst::RemoveFront(LinkedLIst* list)
{
    if (list->head != nullptr)
    {
        Node* ptr = list->head->next;
        delete list->head;
        list->head = list->curr = ptr;
    }
}

void LinkedLIst::RemoveRear(LinkedLIst* list)
{
    Node* ptr = list->head;
    while (ptr->next->next != nullptr)
    {
        ptr = ptr->next;
    }
    delete ptr->next;
    ptr->next = nullptr;
}

void LinkedLIst::RemoveCurrent(LinkedLIst* list , Node* curr)
{
    if (list->head != nullptr )
    {
        if (curr == list->head)
        {
            RemoveFront(list);
        }
        else
        {
            Node* ptr = list->head;
            while (ptr->next != curr)
            {
                ptr = ptr->next;
            }
            ptr->next = curr->next;
            delete curr;
            curr = ptr;
        }
    }
}

void LinkedLIst::Clear(LinkedLIst* list)
{
    while (list->head != nullptr)
    {
        RemoveFront(list);
        list->curr = nullptr;
    }
}

void LinkedLIst::PrintCurrent(const LinkedLIst* list)
{
    if (list->curr == nullptr)
    {
        std::cout << "노드없음";
    }
    else
    {
        
    }
}

void LinkedLIst::Print(const LinkedLIst* list)
{
    if (list->head == nullptr)
    {
        std::cout << "노드없음";
    }
    else
    {
        Node* ptr = list->head;
        while (ptr != nullptr)
        {
            std::cout << ptr->data.no;
            std::cout << ptr->data.name;
            ptr = ptr->next;
        }
    }
}
