//�����������飬��дһ���������������ǵĽ�����
//
//ʾ�� 1:
//
//����: nums1 = [1, 2, 2, 1], nums2 = [2, 2] ��� : [2]
//
//	ʾ�� 2 :
//
//	���� : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4] ��� : [9, 4]
//
//	˵�� :
//
//	�������е�ÿ��Ԫ��һ����Ψһ��
//
//	���ǿ��Բ�������������˳�� 

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i, j, k, n1, n2;
	int count = 0;
	printf("������num1��ֵ������:");
	scanf_s("%d", &n1);
	int *num1 = (int *)malloc(sizeof(int) * n1);
	for (i = 0; i < n1; i++)
	{
		printf("������num1����ֵ:");
		scanf_s("%d", &num1[i]);
	}
	printf("������num2��ֵ������:");
	scanf_s("%d", &n2);
	int *num2 = (int *)malloc(sizeof(int) * n2);
	for (i = 0; i < n2; i++)
	{
		printf("������num2����ֵ:");
		scanf_s("%d", &num2[i]);
	}
	int *num3 = (int *)malloc(sizeof(int) * n2);
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (num1[i] == num2[j])
			{
				for (k = 0; k < count; k++)
				{
					if (num3[k] == num1[i])
					{
						break;
					}
				}
				if (k == count)
				{
					num3[k] = num1[i];
					count++;
				}
			}
		}
	}
	printf("����Ϊ:\n");
	for (i = 0; i < count; i++)
	{
		printf("%d\t", num3[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}