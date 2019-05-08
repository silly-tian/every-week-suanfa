//本周算法题目：1.给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int count_1 = 0;
	int count_2 = 0;
	int i, j;
	int n = 0;
	char s[100];
	printf("请输入一个字符串:");
	scanf_s("%s", s, 100);
	for (i = 1;s[i]; i++)
	{
		for (j = n; j < i; j++)//abcdbfg
		{
			if (s[i] == s[j])
			{
				count_1 = (i - n);
				n = j + 1;
				if (count_1 > count_2)
				{
					count_2 = count_1;
				}
				break;
			}
			
		}
	}
	if (!s[i])
	{
		count_1 = (i - n);
		if (count_1 > count_2)
		{
			count_2 = count_1;
		}
	}
	printf("最长为:%d", count_2);

	system("pause");
	return 0;
}