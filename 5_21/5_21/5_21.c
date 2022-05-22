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
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if (i == 3)
//		printf("三次都错误，退出程序");
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



//int main()//找最大公约数
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m > n ? m : n;

//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数：%d\n", max);
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
//	printf("最大公约数:%d", n);
//	return 0;
//}


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system 头文件是 stdlib.h

again:
	printf("请注意，电脑一分钟关机，请输入我是猪取消\n");
	scanf("%s", input);
	//strcmp 头文件是 string.h
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}