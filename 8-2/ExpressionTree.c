#include "ListBaseStack.h"
#include "BinaryTree.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


BTreeNode* MakeExpTree(char exp[])
{
	Stack stack;
	StackInit(&stack);

	int expLen = strlen(exp);
	int i;
	BTreeNode* pnode;

	for (i = 0; i < expLen; i++)
	{
		pnode = MakeBTreeNode();

		if (isdigit(exp[i]))
		{
			SetData(pnode, exp[i] - '0');
		}
		else
		{
			MakeRightSubTree(pnode, SPop(&stack));
			MakeLeftSubTree(pnode, SPop(&stack));
			SetData(pnode, exp[i]);
				
		}
		SPush(&stack, pnode);
		///printf("%c %d\n", SPeek(&stack), SPeek(&stack));
	}
	
	return SPop(&stack);
	

}

int  EvaluateExpTree(BTreeNode* bt)
{

}

void ShowNodeData(int data)
{
	if (0 <= data && data <= 9)
		printf("%d ", data);
	else
		printf("%c ", data);
}

void ShowPrefixTypeExp(BTreeNode* bt)
{
	PreorderTraverse(bt, ShowNodeData);
}
void ShowInfixTypeExp(BTreeNode* bt) /*  이걸 수정해야한다고? */
{
	InorderTraverse(bt, ShowNodeData);
}
void ShowPostfixTypeExp(BTreeNode* bt)
{
	PostorderTraverse(bt, ShowNodeData);
}