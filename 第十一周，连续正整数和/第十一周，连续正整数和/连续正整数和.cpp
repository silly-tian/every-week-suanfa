//����һ�������� N�������ж���������������������������֮��Ϊ N ?
//
//ʾ�� 1 :
//
//	���� : 5
//	��� : 2
//	���� : 5 = 5 = 2 + 3������������������([5], [2, 3])��ͺ�Ϊ 5��
//	ʾ�� 2 :
//
//	���� : 9
//	��� : 3
//	���� : 9 = 9 = 4 + 5 = 2 + 3 + 4
//	ʾ�� 3 :
//
//	���� : 15
//	��� : 4
//	���� : 15 = 15 = 8 + 7 = 4 + 5 + 6 = 1 + 2 + 3 + 4 + 5
//	˵�� : 1 <= N <= 10 ^ 9


#include "stdio.h"
#include "stdlib.h"

int main()
{
	int N;
	int sum = 1;
	int n = 1;
	int i;
	int count = 0;
	printf("������N��ֵ:");
	scanf_s("%d", &N);
	while (1)
	{
		n++;
		sum = sum + n;
		if (sum == N)
		{
			break;
		}
		else if (sum > N)
		{
			n--;
			break;
		}
	}
	for (i = 1; i <= n; i++)
	{
		int a1 = 1;
		do
		{
			sum = i * (a1 + (i - 1) / 2.0);
			a1++;
			if (sum == N)
			{
				count++;
				break;
			}
		} while (sum < N);
	}
	printf("���Ϊ%d\n", count);

	system("pause");
	return 0;
}