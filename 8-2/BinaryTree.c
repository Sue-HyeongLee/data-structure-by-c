#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTData GetData(BTreeNode* bt)
{
	return bt->data;

}

void SetData(BTreeNode* bt, BTData data)
{
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt)
{
	return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode* bt)
{
	return bt->right;

}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->left != NULL)
		free(main->left);
	main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->right != NULL)
		free(main->right);
	main->right = sub;

} 

void PreorderTraverse(BTreeNode* bt, VisitFunPtr action)
{
	if (bt == NULL)
		return;

	action(bt->data);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);

	

}

void InorderTraverse(BTreeNode* bt, VisitFunPtr action)
{
	if (bt == NULL)
		return;
	if (bt->left != NULL)
		printf("( ");
	InorderTraverse(bt->left, action);
	action(bt->data);
	InorderTraverse(bt->right, action);
	if (bt->left != NULL)
		printf(")");
	
}

void PostorderTraverse(BTreeNode* bt, VisitFunPtr action)
{
	if (bt == NULL)
		return;
	
	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt->data);
}

