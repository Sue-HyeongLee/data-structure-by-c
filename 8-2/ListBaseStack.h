#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define True 1
#define False 0
#include "BinaryTree.h"

typedef BTreeNode* Data;
typedef struct _node
{
	Data data;
	struct _node* next;
}Node;

typedef struct _listStack
{
	Node* head;

} ListStack;

typedef ListStack Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack* pstack);







#endif

