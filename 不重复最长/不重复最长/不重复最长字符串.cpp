//�����㷨��Ŀ��1.����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int count_1 = 0;
	int count_2 = 0;
	int i, j;
	int n = 0;
	char s[100];
	printf("������һ���ַ���:");
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
	printf("�Ϊ:%d", count_2);

	system("pause");
	return 0;
}