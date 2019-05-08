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

struct TagThing *CreateList();
struct TagThing *CreateThing();
void safe_flush(FILE *fp);
void AddThingByLast(struct TagThing* list);
void ShowAll(struct TagThing* list);
void DeleteThing(struct TagThing* list, int i);

struct TagThing //�ṹ��
{
	int num;
	struct TagThing *next;
};

struct TagThing *CreateList() //����һ�����
{
	struct TagThing* list = (struct TagThing*)malloc(sizeof(struct TagThing));
	list->next = NULL;
	return list;
}

struct TagThing *CreateThing() //�����µ���Ʒ�Ľ��
{
	struct TagThing* node = (struct TagThing*)malloc(sizeof(struct TagThing));
	node->next = NULL;
	if (!node)
	{
		printf("�����ڴ�ʧ��");
		return NULL;
	}
	printf("��������:");
	while (scanf_s("%d", &node->num) != 1)
	{
		printf("�����������������:");
		safe_flush(stdin);
	}
	
	return node;
}

void safe_flush(FILE *fp) //���scanf���溯��
{
	int ch;
	while ((ch = fgetc(fp)) != EOF && ch != '\n');
}

void AddThingByLast(struct TagThing* list)//�ѽڵ���ӵ�����(β�巨)
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

void ShowAll(struct TagThing* list) //��ӡ������Ϣ
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

void DeleteThing(struct TagThing* list, int i)//ɾ��
{
	struct TagThing *pos = list;
	struct TagThing *posL = list->next;
	int n;
	printf("������n:");
	while (scanf_s("%d", &n) != 1 || n < 1 || n > i)
	{
		printf("����������������룺");
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
	printf("����������Ҫ��ӵ����ĸ���:");
	while (scanf_s("%d", &i) != 1)
	{
		printf("�����������������:");
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