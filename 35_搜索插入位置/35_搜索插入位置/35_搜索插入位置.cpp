#include "stdio.h"
#include "stdlib.h"

int searchInsert(int* nums, int numsSize, int target);

int searchInsert(int* nums, int numsSize, int target) {
	int middle;
	int left = 0;
	int right = numsSize;
	while (left < right)
	{
		middle = left + (right - left) / 2;
		if (nums[middle] < target)
		{
			left = middle;
		}
		else
		{
			right = middle;
		}
	}
	return left;

}

int main()
{
	int nums[] = { 1, 3, 5, 6 };
	searchInsert(nums, 4, 5);

	system("pause");
	return 0;
}