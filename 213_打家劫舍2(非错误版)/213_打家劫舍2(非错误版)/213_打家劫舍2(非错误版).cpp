#include "stdio.h"
#include "stdlib.h"

int rob(int* nums, int numsSize);

//int rob(int* nums, int numsSize) {
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	else if (numsSize == 1)
//	{
//		return nums[0];
//	}
//	else if (numsSize == 2)
//	{
//		if (nums[0] > nums[1])
//		{
//			return nums[0];
//		}
//		else
//		{
//			return nums[1];
//		}
//	}
//	else if (numsSize == 3)
//	{
//		if (nums[0] > nums[1])
//		{
//			if (nums[0] > nums[2])
//			{
//				return nums[0];
//			}
//			else
//			{
//				return nums[2];
//			}
//		}
//		else
//		{
//			if (nums[1] > nums[2])
//			{
//				return nums[1];
//			}
//			else
//			{
//				return nums[2];
//			}
//		}
//	}
//	else
//	{
//		int left = nums[0];
//		int right = nums[numsSize - 1];
//		int *data = (int *)malloc(sizeof(int) * numsSize);
//		data[0] = 1;
//		int i;
//		nums[2] += nums[0];
//		data[2] = 1;
//		for (i = 3; i < numsSize - 1; i++)
//		{
//			if (nums[i - 3] > nums[i - 2])
//			{
//				if (data[i - 3] == 1)
//				{
//					data[i] = 1;
//				}
//				nums[i] += nums[i - 3];
//			}
//			else
//			{
//				if (data[i - 2] == 1)
//				{
//					data[i] = 1;
//				}
//				nums[i] += nums[i - 2];
//			}
//		}
//		// if (data[numsSize - 1] == 1)
//		// {
//		//     if (left > right)
//		//     {
//		//         if ((nums[numsSize - 1] - right) > (nums[numsSize - 2]))
//		//         {
//		//             return nums[numsSize - 1] - right; 
//		//         }
//		//         else
//		//         {
//		//             return nums[numsSize - 2];
//		//         }
//		//     }
//		//     else
//		//     {
//		//         if ((nums[numsSize - 1] - left) > (nums[numsSize - 2]))
//		//         {
//		//             return nums[numsSize - 1] - left; 
//		//         }
//		//         else
//		//         {
//		//             return nums[numsSize - 2];
//		//         }
//		//     }
//		// }
//		// else
//		// {
//		//     if (nums[numsSize - 2] > nums[numsSize - 1])
//		//     {
//		//         return nums[numsSize - 2];
//		//     }
//		//     else
//		//     {
//		//         return nums[numsSize - 1];
//		//     }
//		// }
//		if (data[numsSize - 4] == 1 && data[numsSize - 3] == 1)
//		{
//			if (nums[numsSize - 4] > nums[numsSize - 3])
//			{
//				if (left > right)
//				{
//					nums[numsSize - 1] += (nums[numsSize - 4] - right);
//				}
//				else
//				{
//					nums[numsSize - 1] += (nums[numsSize - 4] - left);
//				}
//			}
//			else
//			{
//				if (left > right)
//				{
//					nums[numsSize - 1] += (nums[numsSize - 3] - right);
//				}
//				else
//				{
//					nums[numsSize - 1] += (nums[numsSize - 3] - left);
//				}
//			}
//		}
//		else if (data[numsSize - 4] != 1 && data[numsSize - 3] != 1)
//		{
//			if (nums[numsSize - 4] > nums[numsSize - 3])
//			{
//				nums[numsSize - 1] += nums[numsSize - 4];
//			}
//			else
//			{
//				nums[numsSize - 1] += nums[numsSize - 3];
//			}
//		}
//		else if (data[numsSize - 4] == 1 && data[numsSize - 3] != 1)
//		{
//			if (left > right)
//			{
//				if ((nums[numsSize - 1] + nums[numsSize - 4] - right) > (nums[numsSize - 1] + nums[numsSize - 3]))
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 4] - right;
//				}
//				else
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 3];
//				}
//			}
//			else
//			{
//				if ((nums[numsSize - 1] + nums[numsSize - 4] - left) > (nums[numsSize - 1] + nums[numsSize - 3]))
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 4] - left;
//				}
//				else
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 3];
//				}
//			}
//		}
//		else if (data[numsSize - 4] != 1 && data[numsSize - 3] == 1)
//		{
//			if (left > right)
//			{
//				if ((nums[numsSize - 1] + nums[numsSize - 3] - right) > (nums[numsSize - 1] + nums[numsSize - 4]))
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 3] - right;
//				}
//				else
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 4];
//				}
//			}
//			else
//			{
//				if ((nums[numsSize - 1] + nums[numsSize - 3] - left) > (nums[numsSize - 1] + nums[numsSize - 4]))
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 3] - left;
//				}
//				else
//				{
//					nums[numsSize - 1] = nums[numsSize - 1] + nums[numsSize - 4];
//				}
//			}
//		}
//		if (nums[numsSize - 1] > nums[numsSize - 2])
//		{
//			return nums[numsSize - 1];
//		}
//		else
//		{
//			return nums[numsSize - 2];
//		}
//	}
//}

int rob(int* nums, int numsSize) {
	if (numsSize == 0)
	{
		return 0;
	}
	else if (numsSize == 1)
	{
		return nums[0];
	}
	else if (numsSize == 2)
	{
		return (nums[0] > nums[1] ? nums[0] : nums[1]);
	}
	else if (numsSize == 3)
	{
		if (nums[0] > nums[1])
		{
			return (nums[0] > nums[2] ? nums[0] : nums[2]);
		}
		else
		{
			return (nums[1] > nums[2] ? nums[1] : nums[2]);
		}
	}
	else if (numsSize == 4)
	{
		return (nums[0] + nums[2] > nums[1] + nums[3] ? nums[0] + nums[2] : nums[1] + nums[3]);
	}
	int i;
	int *a = (int *)malloc(sizeof(int) * numsSize);
	int *b = (int *)malloc(sizeof(int) * numsSize);
	for (i = 0; i < numsSize; i++)
	{
		a[i] = nums[i];
		b[i] = nums[i];
	}
	a[3] += a[1];
	for (i = 4; i < numsSize; i++)
	{
		a[i] += (a[i - 3] > a[i - 2] ? a[i - 3] : a[i - 2]);
	}
	b[2] += b[0];
	for (i = 3; i < numsSize - 1; i++)
	{
		b[i] += (b[i - 3] > b[i - 2] ? b[i - 3] : b[i - 2]);
	}
	int a_max = (a[numsSize - 2] > a[numsSize - 1] ? a[numsSize - 2] : a[numsSize - 1]);
	int b_max = (b[numsSize - 3] > b[numsSize - 2] ? b[numsSize - 3] : b[numsSize - 2]);
	return (a_max > b_max ? a_max : b_max);
}

int main()
{
	int data[] = { 2,7,9,3,1};
	int a = rob(data, 5);

	system("pause");
	return 0;
}