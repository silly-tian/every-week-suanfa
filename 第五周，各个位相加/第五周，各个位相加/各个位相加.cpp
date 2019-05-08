//2.给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
//
//示例 :
//输入: 38
//	输出 : 2
//	解释 : 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2。 由于 2 是一位数，所以返回 2。

#include "stdio.h"
#include "stdlib.h"

int add(int n);

int add(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum > 10)
	{
		add(sum);
	}
	if (sum < 10)
	{
		return sum;
	}
}

int main()
{
	int num;
	printf("请输入一个非负整数num:");
	scanf_s("%d", &num);
	printf("处理之后的数为:%d\n", add(num));

	system("pause");
	return 0;
}