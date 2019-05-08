//给定一个链表，删除链表的倒数第 n 个节点，并且输出删除后的链表。
//示例：
//给定一个链表 : 1->2->3->4->5, 和 n = 2.
//
//	当删除了倒数第二个节点后，链表变为 1->2->3->5.
//	说明：
//
//	给定的 n 保证是有效的。
//

#include "stdio.h"
#include "stdlib.h"

void ShowAll(struct TagThing *pHead);

void CreateAndDelete(struct TagThing *pHead);

struct TagThing
{
	int num;
	struct TagThing *next;
};

void CreateAndDelete(struct TagThing *pHead)
{
	struct TagThing *pos = pHead;
	struct TagThing *pos1 = pHead;
	int m;
	int n;
	int n1 = 1;
	int i;
	printf("请输入链表的长度:");
	scanf_s("%d", &m);
	printf("请输入n:");
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
	{
		struct TagThing *node = (struct TagThing *)malloc(sizeof(struct TagThing));
		node->next = NULL;
		printf("请输入结点的数值:");
		scanf_s("%d", &node->num);
		while (pos->next)
		{
			pos = pos->next;
		}
		pos->next = node;
		if (n1 > n)
		{
			pos1 = pos1->next;
		}
		n1++;
	}
	ShowAll(pHead);
	struct TagThing *pos2 = pos1->next;
	pos1->next = pos2->next;
	pos2->next = NULL;
	free(pos2);
	ShowAll(pHead);
}

void ShowAll(struct TagThing *pHead)
{
	struct TagThing *pos = pHead->next;
	while (pos)
	{
		printf("%d\t", pos->num);
		pos = pos->next;
	}
	printf("\n");
}

int main()
{
	struct TagThing *list = (struct TagThing *)malloc(sizeof(list));
	list->next = NULL;
	CreateAndDelete(list);


	system("pause");
	return 0;
}