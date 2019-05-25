//1.数组的每个索引做为一个阶梯，第 i个阶梯对应着一个非负数的体力花费值 cost[i](索引从0开始)。
//
//每当你爬上一个阶梯你都要花费对应的体力花费值，然后你可以选择继续爬一个阶梯或者爬两个阶梯。
//
//您需要找到达到楼层顶部的最低花费。在开始时，你可以选择从索引为 0 或 1 的元素作为初始阶梯。
//
//示例 1:
//
//输入: cost = [10, 15, 20]
//	输出 : 15
//	解释 : 最低花费是从cost[1]开始，然后走两步即可到阶梯顶，一共花费15。
//	示例 2 :
//
//	输入 : cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
//	输出 : 6
//	解释 : 最低花费方式是从cost[0]开始，逐个经过那些1，跳过cost[3]，一共花费6。
//

//#include "stdio.h"
//#include "stdlib.h"
//
//int main()
//{
//	int level[100] = { 0 };
//	int i;
//	int n;
//	printf("请输入楼梯的阶数:");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入需要消耗的体力:");
//		scanf_s("%d", &level[i]);
//	}
//	for (i = 2; i < n; i++)
//	{
//		if (level[i - 2] < level[i - 1])
//		{
//			level[i] += level[i - 2];
//		}
//		else
//		{
//			level[i] += level[i - 1];
//		}
//	}
//	if (level[n - 2] < level[n - 1])
//	{
//		printf("需要消耗的最少体力为:%d\n", level[n - 2]);
//	}
//	else
//	{
//		printf("需要消耗的最少体力为:%d\n", level[n - 1]);
//	}
//
//	system("pause");
//	return 0;
//}

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int level[100] = { 0 };
	int i;
	int n;
	printf("请输入楼梯的阶数:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("请输入需要消耗的体力:");
		scanf_s("%d", &level[i]);
	}
	for (i = 3; i < n; i++)
	{
		if (level[i - 3] < level[i - 2])
		{
			if (level[i - 3] < level[i - 1])
			{
				level[i] += level[i - 3];
			}
			else
			{
				level[i] += level[i - 1];
			}
		}
		else
		{
			if (level[i - 2] < level[i - 1])
			{
				level[i] += level[i - 2];
			}
			else
			{
				level[i] += level[i - 1];
			}
		}
	}
	if (level[n - 2] < level[n - 1] && level[n - 2] < level[n - 3])
	{
		printf("需要消耗的最少体力为:%d\n", level[n - 2]);
	}
	else if (level[n - 1] < level[n - 2] && level[n - 1] < level[n - 3])
	{
		printf("需要消耗的最少体力为:%d\n", level[n - 1]);
	}
	else
	{
		printf("需要消耗的最少体力为:%d\n", level[n - 3]);
	}

	system("pause");
	return 0;
}