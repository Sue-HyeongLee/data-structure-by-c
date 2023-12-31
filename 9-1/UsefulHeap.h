#ifndef __SIMPLE_HEAP_H__
#define __SIMPLE_HEAP_H__

#define True 1
#define False 0

#define HEAP_LEN 100

typedef char* HData;

typedef int (*PriorityComp)(HData d1, HData d2);

typedef struct _heap
{
	PriorityComp comp;
	int numOfData;
	HData heapArr[HEAP_LEN];


} Heap;

void HeapInit(Heap* ph, PriorityComp pc);
int HIsEmpty(Heap* ph);

void HInsert(Heap* ph, HData data);
HData HDelete(Heap* ph);
#endif
