//统计所有小于非负整数 n 的质数的数量。
//
//示例 :
//
//输入: 10
//	输出 : 4
//	解释 : 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。

#include "stdio.h"
#include "stdlib.h"


int main()
{
	int i;
	int j;
	int n;
	int count = 0;
	printf("请输入n的值:");
	scanf_s("%d", &n);
	int *num;
	num = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	for (i = 1; i < n; i++)
	{
		if (num[i] == 0)
		{
			continue;
		}
		else
		{
			j = i + 1;
			while (j < n)
			{
				if (num[j] == 0)
				{
					j++;
					continue;
				}
				else
				{
					if ((j + 1) % (i + 1) == 0)
					{
						num[j] = 0;
						j++;
					}
					else
					{
						j++;
					}
				}
			}
		}
	}
	//for (i = 0; i < n; i++)
	//{
	//	printf("%d:%d\t", i + 1, num[i]);
	//}
	for (i = 0; i < n; i++)
	{
		if (num[i] == 1)
		{
			count++;
			printf("%d\t", i + 1);
		}
	}
	printf("\n共有质数%d个\n", count);


	system("pause");
	return 0;
}



// 代码命名规范，代码注释，处理的文件的名字，散点图直方图放在文件夹里，编码规则写成txt，对于这个项目的小总结(有多少个文件，对于每一个文件的解释)

// 