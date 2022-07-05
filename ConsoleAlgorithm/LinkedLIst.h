#pragma once
typedef struct
{
	int no;
	char name[20];
}Member;
typedef struct node
{
	Member data;
	struct node* next;
}Node;

class LinkedLIst
{
private:
	Node* head;
	node* curr;
public:
	LinkedLIst();
	~LinkedLIst();
	Node* CreateNode();
	void SetNode(Node* n, const Member* x, Node* next);
	Node* search(LinkedLIst* list, const Member* x, int compare(const Member* x,const Member* y));
	void InsertFront(LinkedLIst* list, const Member* x);
	void InsertPriority(LinkedLIst* list, const Member* x);
	void InsertRear(LinkedLIst* list, const Member* x);
	void RemoveFront(LinkedLIst* list);
	void RemoveRear(LinkedLIst* list);
	void RemoveCurrent(LinkedLIst* list, Node* curr);
	void Clear(LinkedLIst* list);
	void PrintCurrent(const LinkedLIst* list);
	void Print(const LinkedLIst* list);


};

