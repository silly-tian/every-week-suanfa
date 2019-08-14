//使用栈实现队列的下列操作：
//
//push(x) --将一个元素放入队列的尾部。
//pop() --从队列首部移除元素。
//peek() --返回队列首部的元素。
//empty() --返回队列是否为空。
//示例 :
//
//MyQueue queue = new MyQueue();
//
//queue.push(1);
//queue.push(2);
//queue.peek();  // 返回 1
//queue.pop();   // 返回 1
//queue.empty(); // 返回 false
//说明:
//
//你只能使用标准的栈操作 -- 也就是只有 push to top, peek / pop from top, size, 和 is empty 操作是合法的。
//你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。
//假设所有操作都是有效的 （例如，一个空的队列不会调用 pop 或者 peek 操作）

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
		printf("数据已满,无法添加!\n");
		return count;
	}
	int n;
	printf("请输入您想要添加的数:");
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
	printf("添加成功!\n");
	system("pause");
	return count;
}

int pop(int queue[], int **top, int **end, int count, int *num1)
{
	if (*num1 == 0)
	{
		printf("数据已经为空，不能删除!\n");
		system("pause");
		return 0;
	}
	else
	{
		*end += 1;
		*num1 -= 1;
		printf("删除成功\n");
		system("pause");
		return *(*end - 1);
	}
}

int peek(int queue[], int **top, int **end, int count, int *num1)
{
	if (*num1 == 0)
	{
		printf("数据已经为空，没有首元素!\n");
		system("pause");
		return 0;
	}
	else
	{
		printf("首元素为%d\n", **end);
		system("pause");
		return **end;
	}
}

int empty(int queue[], int **top, int **end, int count, int *num1)
{
	if (*num1 == 0)
	{
		printf("栈为空!\n");
		system("pause");
		return 0;
	}
	else
	{
		printf("栈不为空!\n");
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
		printf("1. push(x) --将一个元素放入队列的尾部。\n");
		printf("2. pop() --从队列首部移除元素。\n");
		printf("3. peek() --返回队列首部的元素。\n");
		printf("4. empty() --返回队列是否为空。\n");
		printf("5. 查看所有。\n");
		printf("0. 退出\n");
		printf("请输入功能编号:");
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
				printf("栈为空!\n");
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