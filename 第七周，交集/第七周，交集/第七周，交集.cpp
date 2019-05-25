//给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//
//输入: nums1 = [1, 2, 2, 1], nums2 = [2, 2] 输出 : [2]
//
//	示例 2 :
//
//	输入 : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4] 输出 : [9, 4]
//
//	说明 :
//
//	输出结果中的每个元素一定是唯一的
//
//	我们可以不考虑输出结果的顺序。 

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i, j, k, n1, n2;
	int count = 0;
	printf("请输入num1数值的数量:");
	scanf_s("%d", &n1);
	int *num1 = (int *)malloc(sizeof(int) * n1);
	for (i = 0; i < n1; i++)
	{
		printf("请输入num1的数值:");
		scanf_s("%d", &num1[i]);
	}
	printf("请输入num2数值的数量:");
	scanf_s("%d", &n2);
	int *num2 = (int *)malloc(sizeof(int) * n2);
	for (i = 0; i < n2; i++)
	{
		printf("请输入num2的数值:");
		scanf_s("%d", &num2[i]);
	}
	int *num3 = (int *)malloc(sizeof(int) * n2);
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (num1[i] == num2[j])
			{
				for (k = 0; k < count; k++)
				{
					if (num3[k] == num1[i])
					{
						break;
					}
				}
				if (k == count)
				{
					num3[k] = num1[i];
					count++;
				}
			}
		}
	}
	printf("交集为:\n");
	for (i = 0; i < count; i++)
	{
		printf("%d\t", num3[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}