/* 2.��дһ�������������ַ��������е������ǰ׺��
��������ڹ���ǰ׺�����ؿ��ַ��� ""��
ʾ�� 1:

����: ["flower", "flow", "flight"]
	��� : "fl"
	ʾ�� 2 :

	���� : ["dog", "racecar", "car"]
	��� : ""
	���� : ���벻���ڹ���ǰ׺��
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
