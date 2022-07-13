#include "DoubleLinkedLIst.h"
#include <iostream>
DoubleLinkedList::DoubleLinkedList()
{
}
DoubleLinkedList::~DoubleLinkedList()
{
}
Node* DoubleLinkedList::CreateNode()
{
    Node* newNode = new Node();
    newNode->front = nullptr;
    newNode->back = nullptr;
    return newNode;
}
int DoubleLinkedList::compare(const Member* x, const Member* y)
{
    return x->no <y->no ? -1 : x->no > y->no ? 1 : 0;
}
void DoubleLinkedList::SetNode(Node* n, const Member* x, Node* front, Node* back)
{
    n->data = *x;
    n->front = front;
    n->back = back;
}
Node* DoubleLinkedList::FrontSearch(DoubleLinkedList* list, const Member* x)
{
    
    if (list->head == nullptr)
    {
        return nullptr;
    }
    list->curr = list->head;
    do
    {
        if (compare(&list->curr->data, x) == 0)
        {
            return list->curr;
        }
        list->curr = list->curr->back;
    } while (list->curr != list->head);
    return nullptr;
}
Node* DoubleLinkedList::BackSearch(DoubleLinkedList* list, const Member* x)
{
    list->curr = list->tail;
    do
    {
        if (compare(&list->curr->data, x) == 0)
        {
            return list->curr;
        }
        list->curr = list->curr->front;
    } while (list->curr != list->tail);
    return nullptr;
}

void DoubleLinkedList::InsertFront(DoubleLinkedList* list, const Member* x)
{
    if (list->head == nullptr)
    {
        Node* newNode = CreateNode();
        SetNode(newNode, x, newNode, newNode);
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        Node* newNode = CreateNode();
        SetNode(newNode, x, list->tail, list->head);
        list->head = newNode;
    }
}
void DoubleLinkedList::InsertRear(DoubleLinkedList* list, const Member* x)
{
    if (list->tail == nullptr)
    {
        Node* newNode = CreateNode();
        SetNode(newNode, x, newNode, newNode);
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        Node* newNode = CreateNode();
        SetNode(newNode, x, list->tail->front, list->head);
        list->tail = newNode;
    }
}
void DoubleLinkedList::InsertPriority(DoubleLinkedList* list, const Member* x)
{
    Node* newNode = CreateNode();
    SetNode(newNode, x, nullptr, nullptr);
    list->curr = list->head;
    if (list->head == NULL)
    {
        SetNode(newNode, x, newNode, newNode);
        list->head = newNode;
        list->tail = newNode;
    }
    else if (newNode->data.no <= list->head->data.no)
    {
        newNode->back = list->head;
        newNode->front = list->tail;
        list->head->front = newNode;
        list->head = newNode;
        list->tail->back = newNode;
    }
    else
    {
        while (1)
        {
            if (list->curr->back == list->head)
            {
                newNode->front = list->curr;
                newNode->back = list->head;
                list->curr->back = newNode;
                list->head->front = newNode;
                list->tail = newNode;
                break;
            }
            else if (newNode->data.no < list->curr->back->data.no)
            {
                newNode->back = list->curr->back;
                newNode->front = list->curr;
                list->curr->back->front = newNode;
                list->curr->back = newNode;
                
                break;
            }
            list->curr = list->curr->back;
        }
    }
}
void DoubleLinkedList::RemoveFront(DoubleLinkedList* list)
{
    if (list->head != nullptr)
    {
        Node* ptr = list->head->back;
        ptr->front = list->head->front;
        list->head->front->back = ptr;
        list->head->front = nullptr;
        list->head->back = nullptr;
        delete list->head;
        list->head = nullptr;
        if (ptr != list->tail)
        {
            list->head = list->curr = ptr;
        }
    }
}
void DoubleLinkedList::RemoveRear(DoubleLinkedList* list)
{
    if (list->tail != nullptr)
    {
        Node* ptr = list->tail->front;
        ptr->back = list->tail->back;
        list->tail->front = nullptr;
        list->tail->back = nullptr;
        delete list->tail;
        list->tail = list->curr = ptr;
        list->tail->back->front = ptr;
    }
}
void DoubleLinkedList::RemoveCurrent(DoubleLinkedList* list, Node* curr)
{
    if (list->head != nullptr)
    {
        if (curr == list->head)
        {
            RemoveFront(list);
        }
        else if(curr == list->tail)
        {
            RemoveRear(list);
        }
        else
        {
            Node* ptr = list->head;
            do
            {
                ptr = ptr->back;
                if (ptr == curr)break;
            } while (ptr->back != list->head);
            ptr->front->back = curr->back;
            ptr->back->front= curr->front;
            delete curr;
            curr = ptr;
        }
    }
}
void DoubleLinkedList::Clear(DoubleLinkedList* list)
{
    while (list->head != nullptr)
    {
        RemoveFront(list);
        list->curr = nullptr;
    }
    delete list->tail;
    list->tail = nullptr;
}
void DoubleLinkedList::FrontPrint(const DoubleLinkedList* list)
{
    if (list->head == nullptr)
    {
        std::cout << "노드없음";
    }
    else
    {
        Node* ptr = list->head;
        do
        {
            std::cout << ptr->data.no;
            std::cout << ptr->data.name << std::endl;
            ptr = ptr->back;
        }while (ptr != list->head);
    }
}
void DoubleLinkedList::BackPrint(const DoubleLinkedList* list)
{
    if (list->tail == nullptr)
    {
        std::cout << "노드없음";
    }
    else
    {
        Node* ptr = list->tail;
        do
        {
            std::cout << ptr->data.no;
            std::cout << ptr->data.name << std::endl;
            ptr = ptr->front;
        } while (ptr != list->tail);
    }
}