//1.�����ÿ��������Ϊһ�����ݣ��� i�����ݶ�Ӧ��һ���Ǹ�������������ֵ cost[i](������0��ʼ)��
//
//ÿ��������һ�������㶼Ҫ���Ѷ�Ӧ����������ֵ��Ȼ�������ѡ�������һ�����ݻ������������ݡ�
//
//����Ҫ�ҵ��ﵽ¥�㶥������ͻ��ѡ��ڿ�ʼʱ�������ѡ�������Ϊ 0 �� 1 ��Ԫ����Ϊ��ʼ���ݡ�
//
//ʾ�� 1:
//
//����: cost = [10, 15, 20]
//	��� : 15
//	���� : ��ͻ����Ǵ�cost[1]��ʼ��Ȼ�����������ɵ����ݶ���һ������15��
//	ʾ�� 2 :
//
//	���� : cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
//	��� : 6
//	���� : ��ͻ��ѷ�ʽ�Ǵ�cost[0]��ʼ�����������Щ1������cost[3]��һ������6��
//

//#include "stdio.h"
//#include "stdlib.h"
//
//int main()
//{
//	int level[100] = { 0 };
//	int i;
//	int n;
//	printf("������¥�ݵĽ���:");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("��������Ҫ���ĵ�����:");
//		scanf_s("%d", &level[i]);
//	}
//	for (i = 2; i < n; i++)
//	{
//		if (level[i - 2] < level[i - 1])
//		{
//			level[i] += level[i - 2];
//		}
//		else
//		{
//			level[i] += level[i - 1];
//		}
//	}
//	if (level[n - 2] < level[n - 1])
//	{
//		printf("��Ҫ���ĵ���������Ϊ:%d\n", level[n - 2]);
//	}
//	else
//	{
//		printf("��Ҫ���ĵ���������Ϊ:%d\n", level[n - 1]);
//	}
//
//	system("pause");
//	return 0;
//}

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int level[100] = { 0 };
	int i;
	int n;
	printf("������¥�ݵĽ���:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("��������Ҫ���ĵ�����:");
		scanf_s("%d", &level[i]);
	}
	for (i = 3; i < n; i++)
	{
		if (level[i - 3] < level[i - 2])
		{
			if (level[i - 3] < level[i - 1])
			{
				level[i] += level[i - 3];
			}
			else
			{
				level[i] += level[i - 1];
			}
		}
		else
		{
			if (level[i - 2] < level[i - 1])
			{
				level[i] += level[i - 2];
			}
			else
			{
				level[i] += level[i - 1];
			}
		}
	}
	if (level[n - 2] < level[n - 1] && level[n - 2] < level[n - 3])
	{
		printf("��Ҫ���ĵ���������Ϊ:%d\n", level[n - 2]);
	}
	else if (level[n - 1] < level[n - 2] && level[n - 1] < level[n - 3])
	{
		printf("��Ҫ���ĵ���������Ϊ:%d\n", level[n - 1]);
	}
	else
	{
		printf("��Ҫ���ĵ���������Ϊ:%d\n", level[n - 3]);
	}

	system("pause");
	return 0;
}