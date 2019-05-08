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

struct TagThing *CreateList();
struct TagThing *CreateThing();
void safe_flush(FILE *fp);
void AddThingByLast(struct TagThing* list);
void ShowAll(struct TagThing* list);
void DeleteThing(struct TagThing* list, int i);

struct TagThing //结构体
{
	int num;
	struct TagThing *next;
};

struct TagThing *CreateList() //创建一个结点
{
	struct TagThing* list = (struct TagThing*)malloc(sizeof(struct TagThing));
	list->next = NULL;
	return list;
}

struct TagThing *CreateThing() //创建新的商品的结点
{
	struct TagThing* node = (struct TagThing*)malloc(sizeof(struct TagThing));
	node->next = NULL;
	if (!node)
	{
		printf("申请内存失败");
		return NULL;
	}
	printf("请输入编号:");
	while (scanf_s("%d", &node->num) != 1)
	{
		printf("输入错误请重新输入:");
		safe_flush(stdin);
	}
	
	return node;
}

void safe_flush(FILE *fp) //清空scanf缓存函数
{
	int ch;
	while ((ch = fgetc(fp)) != EOF && ch != '\n');
}

void AddThingByLast(struct TagThing* list)//把节点添加到链表(尾插法)
{
	struct TagThing* pos = list;
	struct TagThing* newThing = CreateThing();
	while (pos->next != NULL)
	{
		pos = pos->next;
	}
	pos->next = newThing;
	newThing->next = NULL;
}

void ShowAll(struct TagThing* list) //打印所有信息
{
	printf("\n");
	struct TagThing* pos = list;
	while (pos->next)
	{
		printf("%d\t", pos->next->num);
		pos = pos->next;
	}
	printf("\n");
}

void DeleteThing(struct TagThing* list, int i)//删除
{
	struct TagThing *pos = list;
	struct TagThing *posL = list->next;
	int n;
	printf("请输入n:");
	while (scanf_s("%d", &n) != 1 || n < 1 || n > i)
	{
		printf("输入错误，请重新输入：");
		safe_flush(stdin);
	}
	for (int j = 0; j < (i - n); j++)
	{
		pos = pos->next;
		posL = posL->next;
	}
	pos->next = posL->next;
	free(posL);
}

int main()
{
	int i;
	int j;
	int n;
	int count = 0;
	struct TagThing *list = CreateList();
	printf("请输入你想要添加的数的个数:");
	while (scanf_s("%d", &i) != 1)
	{
		printf("输入错误，请重新输入:");
		safe_flush(stdin);
	}
	for (j = 0; j < i; j++)
	{
		AddThingByLast(list);
	}
	ShowAll(list);
	DeleteThing(list, i);
	ShowAll(list);


	system("pause");
	return 0;
}