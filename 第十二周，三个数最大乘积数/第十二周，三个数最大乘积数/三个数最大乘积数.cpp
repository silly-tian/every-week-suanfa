//给定一个整型数组，在数组中找出由三个数组成的最大乘积，并输出这个乘积。
//
//示例 1:
//
//输入: [1, 2, 3]
//	输出 : 6
//	示例 2 :
//
//	输入 : [1, 2, 3, 4]   -5  -4  -2  0  1  3  8  10
//                        -6  -5  -3  0  3
//                        -7  -4  -3  -1  0
//                        -7  -5  -4  -3  -2
//	输出 : 24

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int n;
	int i;
	int z;
	int j;
	int num1;
	int num2;
	printf("您要输入的数的个数(必须大于等于3):");
	scanf_s("%d", &n);
	if (n < 3)
	{
		printf("您输入的数小于3，错误\n");
		main();
		return 0;
	}
	int *num = (int *)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个数的数值:", i + 1);
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				z = num[i];
				num[i] = num[j];
				num[j] = z;
			}
		}
	}
	num1 = num[0] * num[1] * num[n - 1];
	num2 = num[n - 1] * num[n - 2] * num[n - 3];
	if (num1 >= num2)
	{
		printf("输出为%d\n", num1);
	}
	else
	{
		printf("输出位%d\n", num2);
	}
	free(num);

	system("pause");
	return 0;
}