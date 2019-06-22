//给定一个正整数 N，试求有多少组连续正整数满足所有数字之和为 N ?
//
//示例 1 :
//
//	输入 : 5
//	输出 : 2
//	解释 : 5 = 5 = 2 + 3，共有两组连续整数([5], [2, 3])求和后为 5。
//	示例 2 :
//
//	输入 : 9
//	输出 : 3
//	解释 : 9 = 9 = 4 + 5 = 2 + 3 + 4
//	示例 3 :
//
//	输入 : 15
//	输出 : 4
//	解释 : 15 = 15 = 8 + 7 = 4 + 5 + 6 = 1 + 2 + 3 + 4 + 5
//	说明 : 1 <= N <= 10 ^ 9


#include "stdio.h"
#include "stdlib.h"

int main()
{
	int N;
	int sum = 1;
	int n = 1;
	int i;
	int count = 0;
	printf("请输入N的值:");
	scanf_s("%d", &N);
	while (1)
	{
		n++;
		sum = sum + n;
		if (sum == N)
		{
			break;
		}
		else if (sum > N)
		{
			n--;
			break;
		}
	}
	for (i = 1; i <= n; i++)
	{
		int a1 = 1;
		do
		{
			sum = i * (a1 + (i - 1) / 2.0);
			a1++;
			if (sum == N)
			{
				count++;
				break;
			}
		} while (sum < N);
	}
	printf("输出为%d\n", count);

	system("pause");
	return 0;
}