#pragma once

typedef struct
{
	int no;
	char name[20];
}Member;

typedef struct node
{
	Member data;
	struct node *next;
}Node;

class Hash
{
public:
	int size;
	Node** table;

	int Initialize(Hash* h, int size);
	Node* Search( Hash* h,  Member* x);
	int Add(Hash* h,  Member* x);
	int Remove(Hash* h,  Member* x);
	void Dump( Hash* h);
	void Clear(Hash* h);
	void Terminate(Hash* h);
};

