#include "stdio.h"
#include "stdlib.h"

int rob(int* nums, int numsSize);

int rob(int* nums, int numsSize) {
	if (numsSize == 1)
	{
		return nums[0];
	}
	int i;
	if (numsSize % 2 == 0)
	{
		int max = 0;
		int sum1 = 0;
		int sum2 = 0;
		for (i = 0; i < numsSize; i++)
		{
			if (i % 2 == 0)
			{
				sum1 += nums[i];
			}
			else
			{
				sum2 += nums[i];
			}
		}
		if (max < sum1)
		{
			max = sum1;
		}
		if (max < sum2)
		{
			max = sum2;
		}
		return max;
	}
	else
	{
		int max = 0;
		int sum1 = 0;
		int sum2 = 0;
		int sum3 = 0;
		for (i = 0; i < numsSize; i++)
		{
			if ((i != (numsSize - 1)) && (i % 2 == 0))
			{
				sum1 += nums[i];
			}
			if ((i != 0) && (i % 2 == 0))
			{
				sum2 += nums[i];
			}
			if (i % 2 != 0)
			{
				sum3 += nums[i];
			}
		}
		if (max < sum1)
		{
			max = sum1;
		}
		if (max < sum2)
		{
			max = sum2;
		}
		if (max < sum3)
		{
			max = sum3;
		}
		return max;
	}
}

int main()
{
	int data[] = { 1 };
	printf("%d", rob(data, 1));

	system("pause");
	return 0;
}