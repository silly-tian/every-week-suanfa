#include "stdio.h"
#include "stdlib.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* G, int GSize);

int numComponents(struct ListNode* head, int* G, int GSize) {
	struct ListNode *pos = head;
	int data[10000] = { 0 };
	// printf("%d", pos->val);
	int count = 1;
	int i;
	for (i = 0; i < GSize; i++)
	{
		data[G[i]] = 1;
	}
	i = 0;
	while (pos)
	{
		if (pos->val == data[i])
		{
			pos = pos->next;
			i++;
		}
		else
		{
			pos = pos->next;
			count++;
		}
	}
	return count;
}

int main()
{


	system("pause");
	return 0;
}