#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i=0;i<3;i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//	if (i == 3)
//		printf("���ζ������˳�����");
//	return 0;
//}
//

//int main()
//
//{
//	int i = 0;
//
//		for (i = 3; i <= 100; i += 3)
//		{
//			printf("%d\n", i);
//		}
//	return 0;
//}



//int main()//�����Լ��
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m > n ? m : n;

//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ����%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,& n);
//	int t = 0;
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ��:%d", n);
//	return 0;
//}


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system ͷ�ļ��� stdlib.h

again:
	printf("��ע�⣬����һ���ӹػ���������������ȡ��\n");
	scanf("%s", input);
	//strcmp ͷ�ļ��� string.h
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}