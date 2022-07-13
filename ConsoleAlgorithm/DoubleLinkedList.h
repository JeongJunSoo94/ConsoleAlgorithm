#pragma once
typedef struct
{
	int no;
	char name[20];
}Member;
typedef struct node
{
	Member data;
	struct node* front;
	struct node* back;
}Node;

class DoubleLinkedList
{
private:
	Node* head;
	Node* tail;
	node* curr;
public:
	DoubleLinkedList();
	~DoubleLinkedList();
	Node* CreateNode();
	int compare(const Member* x, const Member* y);
	void SetNode(Node* n, const Member* x, Node* front, Node* back);
	Node* FrontSearch(DoubleLinkedList* list, const Member* x);
	Node* BackSearch(DoubleLinkedList* list, const Member* x);
	void InsertFront(DoubleLinkedList* list, const Member* x);
	void InsertPriority(DoubleLinkedList* list, const Member* x);
	void InsertRear(DoubleLinkedList* list, const Member* x);
	void RemoveFront(DoubleLinkedList* list);
	void RemoveRear(DoubleLinkedList* list);
	void RemoveCurrent(DoubleLinkedList* list, Node* curr);
	void Clear(DoubleLinkedList* list);
	void FrontPrint(const DoubleLinkedList* list);
	void BackPrint(const DoubleLinkedList* list);

};