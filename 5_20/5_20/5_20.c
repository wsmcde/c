#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1;  i <=100;i++)
//	{
//		if (i%2==1)
//		{
//			printf("%d\n", i);
//
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//			break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//		case 1:m++;//m=3
//		case 2:n++;//n=2
//		case 3:
//			switch (n)//n=2����ֱ��ִ��case2
//			{
//			case 1:
//				n++;
//			case 2:m++; n++;//m=4,n=3
//				break;
//			}
//		case 4:
//			m++;//m=5
//               break;
//		default:
//			break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N��:");
//		//getchar();    //����\n
//	int tmp = 0;        //������������ַ�
//	while ((tmp=getchar())!='\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");\
//
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);
//	for (n=1;n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//���ҵ�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ�%d\n", mid);
			break;
		}
	}
	if (left > left)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}