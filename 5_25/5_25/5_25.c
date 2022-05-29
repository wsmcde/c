#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//一维数组
//int main()
//{
//	char ch[] = "bit";
//	char ch1[3] = { 'b','i','t' };
//	printf("%s\n", ch );
//	printf("%s\n", ch1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//  [] -下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小比第一个得到多少个
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n",*p);
//		p++;
//	}
//
//	return 0;
//}


//二维数组
//int main()
//{
//	//int arr[3][4];
//	//char ch[3][10];
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("%\n");
//
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[3][4];
//	//char ch[3][10];
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for ( i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n",i,j, &arr[i][j]);
//		}
//		printf("%\n");
//
//	}*/
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	return 0;
//}

