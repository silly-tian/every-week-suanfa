//����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�
//
//ʾ�� 1:
//����: 1->1->2
//	��� : 1->2
//
//	ʾ�� 2 :
//	���� : 1->1->2->3->3
//	��� : 1->2->3

#include "stdio.h"
#include "stdlib.h"

void AddByLast(struct node *phead, int n);

void ShowAll(struct node *phead);

void Delete(struct node *phead);

struct node		//���ṹ��
{
	int num;
	struct node *next;
};

void AddByLast(struct node *phead, int n) //β�巨
{
	struct node *add = (struct node*)malloc(sizeof(struct node));
	add->num = n;
	add->next = NULL;
	struct node *pos = phead;
	while (pos->next)
	{
		pos = pos->next;
	}
	pos->next = add;
}

void ShowAll(struct node *phead)   //��ӡȫ��
{
	struct node *pos = phead->next;
	while (pos)
	{
		printf("%d\t", pos->num);
		pos = pos->next;
	}
	printf("\n");
}

void Delete(struct node *phead)		//ɾ���ظ�
{
	struct node *pos = phead->next;
	struct node *Lpos = phead->next->next;
	while (pos->next)
	{
		while (Lpos && pos->num == Lpos->num)
		{
			pos->next = Lpos->next;
			free(Lpos);
			Lpos = pos->next;
		}
		pos = pos->next;
		if (Lpos == NULL)
		{
			break;
		}
		else
		{
			Lpos = Lpos->next;
		}
	}

}

int main()
{
	struct node *list = (struct node *)malloc(sizeof(struct node));
	list->next = NULL;
	int n;
	int i;
	int j;
	printf("����������Ҫ���뼸����:");
	scanf_s("%d", &i);
	for (j = 0; j < i; j++)
	{
		printf("����������Ҫ����������ӵ���(�������������):");
		scanf_s("%d", &n);
		AddByLast(list, n);
	}
	printf("ԭ����Ϊ:\n");
	ShowAll(list);
	Delete(list);
	printf("����֮�������Ϊ:\n");
	ShowAll(list);

	system("pause");
	return 0;
}