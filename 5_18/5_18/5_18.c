#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b, x = 6;
//	a = x++;
//	b = x;
//	printf("%d,%d\n", a, b);
//	x = 6;
//	a = ++x;
//	b = x;
//	printf("%d,%d\n", a, b);
//	return 0;
//}



//int main()
//{
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//
//	return 0;
//}

//
//int main()
//{
//	int input = 0;//这个0是赋予一个初始值，不是真的0，跟随后面数的改变而改变
//	printf("养只猫\n");
//	printf("真的买吗(1/0)?:\n");
//	scanf("%d", &input);//scanf 是输入一个函数的意思
//		
//	if (input == 1)//==1 判定是不是等于1
//		printf("买猫粮\n");
//	else
//		printf("不养");
//	return 0;
//}


//
//int main()
//{
//	int line = 0;
//	while (line<3000)     //while循环，从0开始顺序开始，只要小于3000，就循环。
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line == 3000)  //循环到3000后结束
//	{
//		printf("结束");
//	}
//	return 0;
//}



int main()
{
	int mc1 = 0;
	int mc2 = 0;
	scanf("%d%d", &mc1, &mc2);
	int sum = mc1 + mc2;
	printf("%d\n", sum);
	return 0;
}