//���������� 0 �� 1 ��ɵ����� A�����Ƕ��� N_i���� A[0] �� A[i] �ĵ� i �������鱻����Ϊһ�������������������Чλ�������Чλ����
//
//���ز���ֵ�б� answer��ֻ�е� N_i ���Ա� 5 ����ʱ���� answer[i] Ϊ true������Ϊ false��
//
//
//
//ʾ�� 1��
//
//���룺[0, 1, 1]
//�����[true, false, false]
//���ͣ�
//��������Ϊ 0, 01, 011��Ҳ����ʮ�����е� 0, 1, 3 ��ֻ�е�һ�������Ա� 5 ��������� answer[0] Ϊ�档
//ʾ�� 2��
//
//���룺[1, 1, 1]
//�����[false, false, false]
//ʾ�� 3��
//
//���룺[0, 1, 1, 1, 1, 1]
//�����[true, false, false, false, true, false]
//ʾ�� 4��
//
//���룺[1, 1, 1, 0, 1]
//�����[false, false, false, false, false]
//


#include "stdio.h"
#include "stdlib.h"

int main()
{
	char num_s[20];
	int i;
	int sum = 0;
	int flag[20];
	printf("������(����:011111):");
	scanf_s("%s", num_s, 20);
	for (i = 0; i < 20; i++)
	{
		if (!num_s[i])
		{
			break;
		}
		sum = (sum + num_s[i] - 48) % 5;
		if (sum == 0)
		{
			flag[i] = 1;
		}
		else
		{
			flag[i] = 0;
		}
		printf("%d\t", flag[i]);
		//num[i] = (num_s[i] - 48);
	}
	printf("\n");

	system("pause");
	return 0;
}