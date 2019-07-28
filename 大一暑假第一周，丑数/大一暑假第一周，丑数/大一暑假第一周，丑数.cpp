//编写一个程序判断给定的数是否为丑数。
//
//丑数就是只包含质因数 2, 3, 5 的正整数。
//
//示例 1:
//
//输入: 6
//	输出 : true
//	解释 : 6 = 2 × 3
//	示例 2 :
//
//	输入 : 8
//	输出 : true
//	解释 : 8 = 2 × 2 × 2
//	示例 3 :
//
//	输入 : 14
//	输出 : false
//	解释 : 14 不是丑数，因为它包含了另外一个质因数 7。

#include "stdio.h"
#include "stdlib.h"

int chu(int n);

int chu(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n % 2 == 0)
	{
		chu(n / 2);
	}
	else if (n % 3 == 0)
	{
		chu(n / 3);
	}
	else if (n % 5 == 0)
	{
		chu(n / 5);
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	int n;
	printf("请输入您想要验证的数:");
	scanf_s("%d", &n);
	if (n == 1)
	{
		printf("%d是丑数。", n);
	}
	else
	{
		if (chu(n) == 1)
		{
			printf("%d是丑数", n);
		}
		else
		{
			printf("%d不是丑数", n);
		}
	}

	printf("\n");
	system("pause");
	return 0;
}