#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<>

//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("% d\n", num);
//	add(&num);
//	printf("% d\n", num);
//	add(&num);
//	printf("% d\n", num);
//	return 0;
//}
//
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//
//	//函数返回打印的是屏幕上的字符的个数，所以打印出的是4321
//	printf("%d", printf("%d",printf("%d",43)));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int add(int x, int y);//函数的声明
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//
//int add(int x, int y)//如果放在后面需要在使用的地方声明
//{
//	return x + y;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;//unsigend 无符号型
//	scanf("%u", &num);
//	print(num);
//	//printf("%");
//	return 0;
//}

//int fac(int x)
//{
//	if (x < 0 || x>10)
//	{
//		printf("输入错误");
//		return 0;
//	}
//	 if((x == 0) || (x == 1))
//	{
//		return 1;
//	}
//	else return(x * fac(x - 1));
//}
//
//
//int main()
//{
//	int x, y;
//	printf("输入一个小于10的正整数：");
//	scanf("%d", &x);
//	y = fac(x);
//	printf("%d!=%d\n", x, y);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//
//
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//

//int main()//打印数组中最大值
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()//乘法口诀
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

