#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char * countAndSay(int n);

char * countAndSay(int n) {
	char *data1 = (char *)malloc(sizeof(char) * 5000);
	char *data2 = (char *)malloc(sizeof(char) * 5000);
	int i;
	int j;
	int k;
	int count = 1;
	int length = 1;
	int length_z = 0;
	data1[0] = '1';
	data1[1] = '\0';
	for (i = 0; i < 20 - 1; i++)
	{
		printf("%s\n", data1);
		k = 0;
		count = 1;
		for (j = 0; j < length; j++)
		{
			if (data1[j] == data1[j + 1] && j < length - 1)
			{
				count++;
			}
			else
			{
				data2[k++] = count + 48;
				data2[k++] = data1[j];
				length_z += 2;
				count = 1;
			}
		}
		data2[k] = '\0';
		length = length_z;
		length_z = 0;
		strcpy(data1, data2);
	}
	printf("\n");
	return data1;
}

int main()
{
	//char data[] = "sda";
	//printf("%s\n", data);
	printf("%s\n", countAndSay(5));

	system("pause");
	return 0;
}