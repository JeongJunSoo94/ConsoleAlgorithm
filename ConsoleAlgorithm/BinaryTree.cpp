#include "BinaryTree.h"
int BinaryTree::compare(const Member* x, const Member* y)
{
	return x->no <y->no ? -1 : x->no > y->no ? 1 : 0;
}
BinNode* BinaryTree::Search(BinNode* p, const Member* x)
{
	int cond;
	if (p == NULL)
		return NULL;
	else if ((cond = compare(x, &p->data)) == 0)
		return p;
	else if (cond < 0)
		Search(p->left, x);
	else
		Search(p->right, x);
}
static BinNode* AllocBinNode(void)
{
	return new BinNode();
}

static void SetBinNode(BinNode *n, const Member *x,  BinNode *left,  BinNode *right)
{
	n->data = *x;
	n->left = left;
	n->right = right;
}

BinNode* BinaryTree::Add(BinNode* p, const Member* x)
{
	int cond;
	if (p == nullptr)
	{
		p = AllocBinNode();
		SetBinNode(p, x, nullptr, nullptr);
	}
	else if ((cond = compare(x, &p->data)) == 0)
	{
		std::cout << "이미 들록되어 있습니다.";
	}
	else if (cond < 0)
	{
		p->left = Add(p->left, x);
	}
	else
	{
		p->right = Add(p->right, x);
	}
	return p;
}

int BinaryTree::Remove(BinNode** root, const Member* x)
{
	BinNode* next,* temp;
	BinNode** left;
	BinNode** p = root;

	while (1)
	{
		int cond;
		if (*p == NULL)
		{
			std::cout << "등록 안됨";
			return -1;
		}
		else if((cond = compare(x, &(*p)->data)) == 0)
		{
			break;
		}
		else if (cond < 0)
		{
			p = &((*p)->left);
		}
		else
		{
			p = &((*p)->right);
		}
	}

	if ((*p)->left == NULL)
	{
		next = (*p)->right;
	}
	else
	{
		left = &((*p)->left);
		while((*left)->right != NULL)
		{
			left = &(*left)->right;
		}
		next = *left;
		*left = (*left)->left;
		next->left = (*p)->left;
		next->right = (*p)->right;
	}
	temp = *p;
	*p = next;
	delete temp;
	return 0;
}

void BinaryTree::PrintTree(const BinNode* p)
{
	if (p != NULL)
	{
		PrintTree(p->left);
		std::cout << p->data.no<<" ";
		std::cout << p->data.name<<std::endl;
		PrintTree(p->right);
	}
}

void BinaryTree::FreeTree(BinNode* p)
{
	if (p != NULL)
	{
		FreeTree(p->left);
		FreeTree(p->right);
		delete p;
	}
}
