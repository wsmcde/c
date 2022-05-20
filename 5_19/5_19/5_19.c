#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
	//int b = ++a;   //先加减，再使用
	//printf("%d\n", a);
	//printf("%d\n", b);
	//int a = 10;
	//int b = a++;   //先使用，在加减
	//printf("%d\n", a);
	//printf("%d\n", b);

	//return 0;
////}
//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);
//
//	return 0;
//}


//
//int main()
//{
//	int a, b, c, d, x, y1, y2;
//	a = 7;
//	b = 6;
//	c = 5;
//	d = 4;
//	x = 3;
//	y1 = a * b + c * x + d;
//	y2 = (a + b) * (b + c) * (x + d);
//	printf("%d,%d\n", y1, y2);
//	return 0;
//}
//
//
//
//int main()
//{
//	int x = 6, y, z, m, n;
//	y = ++x;
//	z = x--;
//	m = y / z;
//	n = y % z;
//	printf("%d,%d,%d,%d,%d\n", y, z, m, n,x);
//	return 0;
//}
//


//int main()
//{
//	int a, b, c;
//	float x, y, z;
//	a = b = 1;
//	b += 2;
//	x = a++;
//	y = --b;
//	z = -(--b);
//	c = (int)z;
//	printf("x=%f,y=%f,z=%f\n", x, y, z);
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int x = 10, y = 20, z = 30;
//	z = x != y;
//	printf("%d\n", z);
//	return 0;
//
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}



//
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//struct book
//{
//	char name;
//	float price;
//	char id[30];
//};
//
//int main()
//{
//
//
//	struct stu s = { "张三",20,85.5 };
//	printf("%s %d %lf", s.name, s.age, s.score);
//	return 0;
//}


int max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	int m = max(a, b);
	printf("%d\n", m);

	return 0;
}