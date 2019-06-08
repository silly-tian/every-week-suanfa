//返回所有长度为 N 且满足其每两个连续位上的数字之间的差的绝对值为 K 的非负整数。
//
//请注意，除了数字 0 本身之外，答案中的每个数字都不能有前导零。例如，01 因为有一个前导零，所以是无效的；但 0 是有效的。
//
//你可以按任何顺序返回答案。
//
//
//
//示例 1：
//
//输入：N = 3, K = 7
//输出：[181, 292, 707, 818, 929]
//解释：注意，070 不是一个有效的数字，因为它有前导零。
//示例 2：
//
//输入：N = 2, K = 1
//输出：[10, 12, 21, 23, 32, 34, 43, 45, 54, 56, 65, 67, 76, 78, 87, 89, 98]
//
//
//提示：
//
//1 <= N <= 9
//0 <= K <= 9


#include "stdio.h"
#include "stdlib.h"

void handle(int sum, int i, int n, int k, int count);

void handle(int sum, int i, int n, int k, int count)
{
	int i1, i2, iz, countz, sumz;
	if (count == n)
	{
		printf("%d\t", sum);
		return;
	}
	else
	{
		iz = i;
		countz = count;
		sumz = sum;
		i1 = i - k;
		i2 = i + k;
		if (i1 >= 0 && i1 < 10)
		{
			sum = sum * 10 + i1;
			i = i1;
			count++;
			handle(sum, i, n, k, count);
			i = iz;
			count = countz;
			sum = sumz;
		}
		if (i2 >= 0 && i2 < 10)
		{
			sum = sum * 10 + i2;
			i = i2;
			count++;
			handle(sum, i, n, k, count);
			i = iz;
			count = countz;
			sum = sumz;
		}
	}
}
int main()
{
	int n, k, i;
	int count = 1;
	int sum;
	printf("请输入N的值(1 <= N <= 9):");
	scanf_s("%d", &n);
	printf("请输入K的值(0 <= K <= 9):");
	scanf_s("%d", &k);
	if (n == 1)
	{
		printf("1, 2, 3, 4, 5, 6, 7, 8, 9\n");
	}
	else
	{
		for (i = 1; i < 10; i++)
		{
			sum = i;
			handle(sum, i, n, k, count);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}