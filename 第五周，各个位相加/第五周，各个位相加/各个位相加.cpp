//2.����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ����
//
//ʾ�� :
//����: 38
//	��� : 2
//	���� : ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2�� ���� 2 ��һλ�������Է��� 2��

#include "stdio.h"
#include "stdlib.h"

int add(int n);

int add(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum > 10)
	{
		add(sum);
	}
	if (sum < 10)
	{
		return sum;
	}
}

int main()
{
	int num;
	printf("������һ���Ǹ�����num:");
	scanf_s("%d", &num);
	printf("����֮�����Ϊ:%d\n", add(num));

	system("pause");
	return 0;
}