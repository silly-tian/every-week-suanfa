//��дһ�������жϸ��������Ƿ�Ϊ������
//
//��������ֻ���������� 2, 3, 5 ����������
//
//ʾ�� 1:
//
//����: 6
//	��� : true
//	���� : 6 = 2 �� 3
//	ʾ�� 2 :
//
//	���� : 8
//	��� : true
//	���� : 8 = 2 �� 2 �� 2
//	ʾ�� 3 :
//
//	���� : 14
//	��� : false
//	���� : 14 ���ǳ�������Ϊ������������һ�������� 7��

#include "stdio.h"
#include "stdlib.h"

int chu(int n);

int chu(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n % 2 == 0)
	{
		chu(n / 2);
	}
	else if (n % 3 == 0)
	{
		chu(n / 3);
	}
	else if (n % 5 == 0)
	{
		chu(n / 5);
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	int n;
	printf("����������Ҫ��֤����:");
	scanf_s("%d", &n);
	if (n == 1)
	{
		printf("%d�ǳ�����", n);
	}
	else
	{
		if (chu(n) == 1)
		{
			printf("%d�ǳ���", n);
		}
		else
		{
			printf("%d���ǳ���", n);
		}
	}

	printf("\n");
	system("pause");
	return 0;
}