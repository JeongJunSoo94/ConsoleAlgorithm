#pragma once
#include <iostream>
typedef struct
{
	int no;
	char name[20];
}Member;

typedef struct _bnode
{
	Member data;
	struct _bnode* left;
	struct _bnode* right;
}BinNode;

class BinaryTree
{
public:
	BinNode* root;
	int compare(const Member* x, const Member* y);
	BinNode* Search(BinNode* p, const Member *x);
	BinNode* Add(BinNode* p, const Member *x);
	int Remove(BinNode **root, const Member *x);
	void PrintTree(const BinNode* p);
	void FreeTree(BinNode *p);
};

