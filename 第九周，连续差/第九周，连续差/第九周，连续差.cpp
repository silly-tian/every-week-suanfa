//�������г���Ϊ N ��������ÿ��������λ�ϵ�����֮��Ĳ�ľ���ֵΪ K �ķǸ�������
//
//��ע�⣬�������� 0 ����֮�⣬���е�ÿ�����ֶ�������ǰ���㡣���磬01 ��Ϊ��һ��ǰ���㣬��������Ч�ģ��� 0 ����Ч�ġ�
//
//����԰��κ�˳�򷵻ش𰸡�
//
//
//
//ʾ�� 1��
//
//���룺N = 3, K = 7
//�����[181, 292, 707, 818, 929]
//���ͣ�ע�⣬070 ����һ����Ч�����֣���Ϊ����ǰ���㡣
//ʾ�� 2��
//
//���룺N = 2, K = 1
//�����[10, 12, 21, 23, 32, 34, 43, 45, 54, 56, 65, 67, 76, 78, 87, 89, 98]
//
//
//��ʾ��
//
//1 <= N <= 9
//0 <= K <= 9


#include "stdio.h"
#include "stdlib.h"

void handle(int sum, int i, int n, int k, int count);

void handle(int sum, int i, int n, int k, int count)
{
	int i1, i2, iz, countz, sumz;
	if (count == n)
	{
		printf("%d\t", sum);
		return;
	}
	else
	{
		iz = i;
		countz = count;
		sumz = sum;
		i1 = i - k;
		i2 = i + k;
		if (i1 >= 0 && i1 < 10)
		{
			sum = sum * 10 + i1;
			i = i1;
			count++;
			handle(sum, i, n, k, count);
			i = iz;
			count = countz;
			sum = sumz;
		}
		if (i2 >= 0 && i2 < 10)
		{
			sum = sum * 10 + i2;
			i = i2;
			count++;
			handle(sum, i, n, k, count);
			i = iz;
			count = countz;
			sum = sumz;
		}
	}
}
int main()
{
	int n, k, i;
	int count = 1;
	int sum;
	printf("������N��ֵ(1 <= N <= 9):");
	scanf_s("%d", &n);
	printf("������K��ֵ(0 <= K <= 9):");
	scanf_s("%d", &k);
	if (n == 1)
	{
		printf("1, 2, 3, 4, 5, 6, 7, 8, 9\n");
	}
	else
	{
		for (i = 1; i < 10; i++)
		{
			sum = i;
			handle(sum, i, n, k, count);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}