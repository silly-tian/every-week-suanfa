//给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
//
//示例 1:
//输入: 1->1->2
//	输出 : 1->2
//
//	示例 2 :
//	输入 : 1->1->2->3->3
//	输出 : 1->2->3

#include "stdio.h"
#include "stdlib.h"

void AddByLast(struct node *phead, int n);

void ShowAll(struct node *phead);

void Delete(struct node *phead);

struct node		//结点结构体
{
	int num;
	struct node *next;
};

void AddByLast(struct node *phead, int n) //尾插法
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

void ShowAll(struct node *phead)   //打印全部
{
	struct node *pos = phead->next;
	while (pos)
	{
		printf("%d\t", pos->num);
		pos = pos->next;
	}
	printf("\n");
}

void Delete(struct node *phead)		//删除重复
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
	printf("请输入您想要输入几个数:");
	scanf_s("%d", &i);
	for (j = 0; j < i; j++)
	{
		printf("请输入您想要在链表中添加的数(请输入有序的数):");
		scanf_s("%d", &n);
		AddByLast(list, n);
	}
	printf("原链表为:\n");
	ShowAll(list);
	Delete(list);
	printf("处理之后的链表为:\n");
	ShowAll(list);

	system("pause");
	return 0;
}