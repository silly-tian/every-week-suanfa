/* 2.编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
示例 1:

输入: ["flower", "flow", "flight"]
	输出 : "fl"
	示例 2 :

	输入 : ["dog", "racecar", "car"]
	输出 : ""
	解释 : 输入不存在公共前缀。
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int flag = 1;
	int count = 0;
	int i, j;
	char c[3][10] = { "flower", "flow", "flight" };
	for (i = 0; i < strlen(c[0]); i++)
	{
		for (j = 1; j < 3; j++)
		{
			if (c[0][0] != c[j][0])
			{
				flag = 0;
				break;
			}
			if (c[0][i] != c[j][i])
			{
				break;
			}
			if (j == 2)
			{
				count++;
			}
		}

	}
	if (flag = 1)
	{
		for (i = 0; i < count; i++)
		{
			printf("%c", c[0][i]);
		}
		printf("\n");
	}
	else
	{
		printf("");
		printf("\n");
	}

	system("pause");
	return 0;
}
