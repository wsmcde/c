#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//void print_table(int n)//打印乘法口诀，自定义数
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//int fun(int n)//计算fun（2）结果
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//int main()
//{
//
//	printf("%d", fun(2));
//return 0;
//}

//int my_strlen(char* str)//将字符串反向排列
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] =  "abcdef ";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}


//int my_strlen(char* str)//将字符串反向排列,用嵌套实现
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] =  "abcdef ";
//	reverse_string(arr);
//
//	printf("%s\n",arr);
//	return 0;
//}

//int digitsum(int n)//计算一个数的每位之和
//{
//	if (n > 9)
//	{
//		return digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//
//}
//int main()
//{
//	int num = 1729;
//	int sum = digitsum(num);
//	printf("%d", sum);
//	return 0;
//}

//double Pow(int n, int k)//n的k次方
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


