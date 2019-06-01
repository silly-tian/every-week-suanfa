//����һ������������ nums��
//
//�ҳ��������ڳ˻�С�� k ��������������ĸ�����
//
//ʾ�� 1:
//
//����: nums = [10, 5, 2, 6], k = 100
//	��� : 8
//	���� : 8���˻�С��100��������ֱ�Ϊ : [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]��
//	��Ҫע�����[10, 5, 2] �����ǳ˻�С��100�������顣
//	˵�� :
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
	printf("������nums����ֵ������(0 < nums.length <= 50000):");
	while (scanf_s("%d", &n) != 1 || n <= 0 || n > 50000)
	{
		printf("n�����������������:");
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			;
		}
	}
	int *nums = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		printf("������nums[%d]����ֵ(0 < nums[i] < 1000):", i);
		while (scanf_s("%d", &nums[i]) != 1 || nums[i] <= 0 || nums[i] >= 1000)
		{
			printf("nums[%d]�����������������:", i);
			while ((ch = getchar()) != EOF && ch != '\n')
			{
				;
			}
		}
	}
	printf("������k����ֵ:(0 <= k < 10 ^ 6):");
	while (scanf_s("%d", &k) != 1 || k < 0 || k >= 1e6)
	{
		printf("k�����������������:");
		while ((ch = getchar()) != EOF && ch != '\n')
		{
			;
		}
	}
	printf("�ҳ��������ڳ˻�С�� k ��������������ĸ���Ϊ%d\n", dp(nums, n, k));
	system("pause");

	return 0;
}