//ͳ������С�ڷǸ����� n ��������������
//
//ʾ�� :
//
//����: 10
//	��� : 4
//	���� : С�� 10 ������һ���� 4 ��, ������ 2, 3, 5, 7 ��

#include "stdio.h"
#include "stdlib.h"


int main()
{
	int i;
	int j;
	int n;
	int count = 0;
	printf("������n��ֵ:");
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
	printf("\n��������%d��\n", count);


	system("pause");
	return 0;
}



// ���������淶������ע�ͣ�������ļ������֣�ɢ��ͼֱ��ͼ�����ļ�����������д��txt�����������Ŀ��С�ܽ�(�ж��ٸ��ļ�������ÿһ���ļ��Ľ���)

// 