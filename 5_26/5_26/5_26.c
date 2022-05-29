#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	char ch;
	scanf("%c", &ch);
	int i,j;
	int num = 3;
	for ( i = 1; i <= num; i++)
	{
		for (j = 0; j < num - i; j++)
			printf(" ");
			for ( j = 0; j < 2*i-1; j++)
				printf("%c", ch);
				printf("\n");
	}
	for ( i = 1; i < num; i++)
	{
		for (j = 0; j < i; i++)
			printf(" ");
		for (j = 0; j < 2 * (num - i) - 1; j++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}