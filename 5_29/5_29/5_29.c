#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = add(a, b);
//	printf("%d", ret);
//	return 0;
//}

struct Book
{
	char name[20];
	char id[20];
	int price;
};

//int main()
//{
//	//int num = 10;
//	struct Book b = { "c语言","c2022529",55 };
//	struct Book* pb = &b;
//	printf("书名:%s\n", pb->name);
//    printf("书号:%s\n", pb->id);
//    printf("定价:%d\n", pb->price);
//
//
//	//printf("书名:%s\n", b.name);
//	//printf("书号:%s\n", b.id);
//	//printf("定价:%d\n", b.price);
//	//return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;//a和b否是char类型
//	printf("%d", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 5;
//	int d = b - a + c;
//	printf("%d", d);
//
//
//	return 0;
//}

int fun()
{
	static int count = 1;
	return ++count;

}
int main()
{
	int a;
	a = fun() - fun() * fun();
	printf("%d\n", a);


	return 0;
}