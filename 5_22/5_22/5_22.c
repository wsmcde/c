#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()//���������ַ���
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
// 
// 
//int get_max(int x,int y)//�ж����ֵ
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}



//����ab��ֵ
//void swap(int*pa, int*pb)//������������д��void����ʾ����Ҫ����ֵ��Ҳ�����ء�
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int is_prime(int n)//�ж��ǲ�������
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < +200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int is_leap_year(int n)//�ж��ǲ�������
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	    return 1;
//	else
//	    return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for(y=1000;y<=2000;y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//int binary_search(int a[], int k, int s)//���ֲ���
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
//	int key = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���: %d\n", ret);
//	}
//
//	return 0;
//}

//void add(int* p)//����ַ
//{
//	(*p)++;
//
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

int main()
{


	return 0;
}