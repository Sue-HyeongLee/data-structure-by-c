#include "PriorityQueue.h"

void PQueueInit(PQueue* ppq, PriorityComp pc)
{
	HeapInit(ppq, pc);
}

int PQIsEmpty(PQueue* ppq)
{
	return HIsEmpty(ppq);

}

void PEnqueue(PQueue* ppq, PQData data)
{
	HInsert(ppq, data);
}

PQData PDequeue(PQueue* ppq)
{
	
	if (PQIsEmpty(ppq))
	{
		printf("Memory Error");
		exit(-1);

	}
	

	return HDelete(ppq);
}