#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findWords(char words[][20], int wordsSize, int* returnSize) {
	// char ** data = (char**)malloc(sizeof(char*) * wordsSize);
	// printf("%d\n%d", wordsSize, *returnSize);
	int data[58] = { 2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3, 0, 0, 0, 0, 0, 0, 2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3 };
	int i;
	int j;
	int count = wordsSize;
	int *flag = (int *)malloc(sizeof(int) * wordsSize);
	for (i = 0; i < wordsSize; i++)
	{
		for (j = 1; words[i][j] != '\0'; j++)
		{
			if (data[words[i][j] - 65] != data[words[i][j - 1] - 65])
			{
				flag[i] = 0;
				count--;
				break;
			}
		}
	}
	char **word = (char**)malloc(sizeof(char*) * count);
	for (i = 0; i < count; i++)
	{
		word[i] = (char *)malloc(sizeof(char) * 100);
	}
	j = 0;
	for (i = 0; i < wordsSize; i++)
	{
		if (flag[i])
		{
			strcpy(word[j], words[i]);
			j++;
		}
	}
	*returnSize = count;
	return word;
}


int main()
{
	char words[4][20] = { "Hello", "Alaska", "Dad", "Peace" };
	int returnSize;
	findWords(words, 4, &returnSize);

	system("pause");
	return 0;
}