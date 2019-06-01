//给定一个正整数数组 nums。
//
//找出该数组内乘积小于 k 的连续的子数组的个数。
//
//示例 1:
//
//输入: nums = [10, 5, 2, 6], k = 100
//	输出 : 8
//	解释 : 8个乘积小于100的子数组分别为 : [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]。
//	需要注意的是[10, 5, 2] 并不是乘积小于100的子数组。
//	说明 :
//
//	0 < nums.length <= 50000
//		0 < nums[i] < 1000
//		0 <= k < 10 ^ 6

#include "stdio.h"
#include "stdlib.h"

int dp(int nums[], int n, int k);

int dp(int nums[], int n, int k)
{
	int count = 0;
	int sum = 1;
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			sum *= nums[j];
			if (sum < k)
			{
				count++;
			}
			else
			{
				sum = 1;
				break;
			}
			if (j == n - 1)
			{
				sum = 1;
			}
		}
	}
	return count;
}

int main()
{
	int count;
	int i;
	int n, k, ch;
	printf("请输入nums里数值的数量(0 < nums.length <= 50000):");
	while (scanf_s("%d", &n) != 1 || n <= 0 || n > 50000)
	{
		printf("n输入错误，请重新输入:");
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			;
		}
	}
	int *nums = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		printf("请输入nums[%d]的数值(0 < nums[i] < 1000):", i);
		while (scanf_s("%d", &nums[i]) != 1 || nums[i] <= 0 || nums[i] >= 1000)
		{
			printf("nums[%d]输入错误，请重新输入:", i);
			while ((ch = getchar()) != EOF && ch != '\n')
			{
				;
			}
		}
	}
	printf("请输入k的数值:(0 <= k < 10 ^ 6):");
	while (scanf_s("%d", &k) != 1 || k < 0 || k >= 1e6)
	{
		printf("k输入错误，请重新输入:");
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			;
		}
	}
	printf("找出该数组内乘积小于 k 的连续的子数组的个数为%d\n", dp(nums, n, k));
	system("pause");

	return 0;
}