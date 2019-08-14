//ʹ��ջʵ�ֶ��е����в�����
//
//push(x) --��һ��Ԫ�ط�����е�β����
//pop() --�Ӷ����ײ��Ƴ�Ԫ�ء�
//peek() --���ض����ײ���Ԫ�ء�
//empty() --���ض����Ƿ�Ϊ�ա�
//ʾ�� :
//
//MyQueue queue = new MyQueue();
//
//queue.push(1);
//queue.push(2);
//queue.peek();  // ���� 1
//queue.pop();   // ���� 1
//queue.empty(); // ���� false
//˵��:
//
//��ֻ��ʹ�ñ�׼��ջ���� -- Ҳ����ֻ�� push to top, peek / pop from top, size, �� is empty �����ǺϷ��ġ�
//����ʹ�õ�����Ҳ��֧��ջ�������ʹ�� list ���� deque��˫�˶��У���ģ��һ��ջ��ֻҪ�Ǳ�׼��ջ�������ɡ�
//�������в���������Ч�� �����磬һ���յĶ��в������ pop ���� peek ������

#include "stdio.h"
#include "stdlib.h"

int push(int queue[], int **top, int **end, int count, int *num1);

int pop(int queue[], int **top, int **end, int count, int *num1);

int peek(int queue[], int **top, int **end, int count, int *num1);

int empty(int queue[], int **top, int **end, int count, int *num1);

int push(int queue[], int **top, int **end, int count, int *num1)
{
	if (count == 20)
	{
		printf("��������,�޷����!\n");
		return count;
	}
	int n;
	printf("����������Ҫ��ӵ���:");
	scanf_s("%d", &n);
	if (count == 0)
	{
		*top += 1;
		*end += 1;
		**top = n;
		count++;
		*num1 += 1;
	}
	else
	{
		*top += 1;
		**top = n;
		count++;
		*num1 += 1;
	}
	printf("��ӳɹ�!\n");
	system("pause");
	return count;
}

int pop(int queue[], int **top, int **end, int count, int *num1)
{
	if (*num1 == 0)
	{
		printf("�����Ѿ�Ϊ�գ�����ɾ��!\n");
		system("pause");
		return 0;
	}
	else
	{
		*end += 1;
		*num1 -= 1;
		printf("ɾ���ɹ�\n");
		system("pause");
		return *(*end - 1);
	}
}

int peek(int queue[], int **top, int **end, int count, int *num1)
{
	if (*num1 == 0)
	{
		printf("�����Ѿ�Ϊ�գ�û����Ԫ��!\n");
		system("pause");
		return 0;
	}
	else
	{
		printf("��Ԫ��Ϊ%d\n", **end);
		system("pause");
		return **end;
	}
}

int empty(int queue[], int **top, int **end, int count, int *num1)
{
	if (*num1 == 0)
	{
		printf("ջΪ��!\n");
		system("pause");
		return 0;
	}
	else
	{
		printf("ջ��Ϊ��!\n");
		system("pause");
		return 1;
	}
}

int main()
{
	int num = 0;
	int *num1 = &num;
	int flag = 1;
	int i;
	int j;
	int count = 0;
	int queue[20];
	int *top = queue;
	int *end = queue;
	top--;
	end--;
	while (flag)
	{
		system("cls");
		printf("1. push(x) --��һ��Ԫ�ط�����е�β����\n");
		printf("2. pop() --�Ӷ����ײ��Ƴ�Ԫ�ء�\n");
		printf("3. peek() --���ض����ײ���Ԫ�ء�\n");
		printf("4. empty() --���ض����Ƿ�Ϊ�ա�\n");
		printf("5. �鿴���С�\n");
		printf("0. �˳�\n");
		printf("�����빦�ܱ��:");
		scanf_s("%d", &j);
		int *end_z = end;
		switch (j)
		{
		case 1:
			count = (push(queue, &top, &end, count, num1));
			break;
		case 2:
			pop(queue, &top, &end, count, num1);
			break;
		case 3:
			peek(queue, &top, &end, count, num1);
			break;
		case 4:
			empty(queue, &top, &end, count, num1);
			break;
		case 5:
			if (*num1 == 0)
			{
				printf("ջΪ��!\n");
				system("pause");
			}
			else
			{
				while (end_z != top)
				{
					printf("%d\n", *end_z);
					end_z++;
				}
				printf("%d\n", *top);
				system("pause");
			}
			break;
		case 0:
			flag = 0;
			break;
		}
	}
	

	system("pause");
	return 0;
}