//����һ������ɾ������ĵ����� n ���ڵ㣬�������ɾ���������
//ʾ����
//����һ������ : 1->2->3->4->5, �� n = 2.
//
//	��ɾ���˵����ڶ����ڵ�������Ϊ 1->2->3->5.
//	˵����
//
//	������ n ��֤����Ч�ġ�
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
	printf("����������ĳ���:");
	scanf_s("%d", &m);
	printf("������n:");
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
	{
		struct TagThing *node = (struct TagThing *)malloc(sizeof(struct TagThing));
		node->next = NULL;
		printf("�����������ֵ:");
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