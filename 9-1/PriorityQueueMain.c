#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(char* str1, char* str2) // 이거 바꿔야되고.
{
	if (strlen(str1) < strlen(str2))
		return 1;
	else if (strlen(str1) == strlen(str2))
		return 0;
	else
		return -1;
	

 }
int main(void)
{
	
	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);
	PEnqueue(&pq, "Good Morning 1"); //12 words.
	PEnqueue(&pq, "I am a boy 2"); //10 words.
	
	PEnqueue(&pq, "Priority Queue 3"); // 14 words.
	
	PEnqueue(&pq, "Do you like coffee 4"); // 18 words.
	
	PEnqueue(&pq, "I am so happy 5"); //13 words/
	
	while (!PQIsEmpty(&pq))
		printf("%s \n", PDequeue(&pq)); // 이러면 2 - 1- 5- 3- 4 순으로 나와야 함.

	return 0;
}


