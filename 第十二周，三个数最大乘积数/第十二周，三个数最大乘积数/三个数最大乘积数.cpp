//����һ���������飬���������ҳ�����������ɵ����˻������������˻���
//
//ʾ�� 1:
//
//����: [1, 2, 3]
//	��� : 6
//	ʾ�� 2 :
//
//	���� : [1, 2, 3, 4]   -5  -4  -2  0  1  3  8  10
//                        -6  -5  -3  0  3
//                        -7  -4  -3  -1  0
//                        -7  -5  -4  -3  -2
//	��� : 24

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int n;
	int i;
	int z;
	int j;
	int num1;
	int num2;
	printf("��Ҫ��������ĸ���(������ڵ���3):");
	scanf_s("%d", &n);
	if (n < 3)
	{
		printf("���������С��3������\n");
		main();
		return 0;
	}
	int *num = (int *)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("�������%d��������ֵ:", i + 1);
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				z = num[i];
				num[i] = num[j];
				num[j] = z;
			}
		}
	}
	num1 = num[0] * num[1] * num[n - 1];
	num2 = num[n - 1] * num[n - 2] * num[n - 3];
	if (num1 >= num2)
	{
		printf("���Ϊ%d\n", num1);
	}
	else
	{
		printf("���λ%d\n", num2);
	}
	free(num);

	system("pause");
	return 0;
}