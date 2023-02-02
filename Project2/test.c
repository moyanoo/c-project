#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() 
{
	int a = 0;
	int b = 1;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		if (i >=0 )
		{
			b = b * (i + 1);
			printf("%d\n", b);
		}
		else
		{
			printf("输入不正确");
			continue;
		}
	}
	return 0;
}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("mima:");
//	scanf("%s", password);
//	while ((ch = getchar() )!= '\n')
//	{
//		;
//	}
//	printf("queren:");
//	ret = getchar();
//	if (ret == 'y') 
//	{
//		printf("chenggong");
//	}
//	else 
//	{
//		printf("shibai");
//	}
//		return 0;
//
//}
//int main()
//{
//	for (int i = 1; i <= 100; i++) 
//	{
//		if (i % 2 == 1) 
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "ccccc",55 };
//	struct Book* pb = &b1;
//
//	printf( "%s\n",b1.name );
//	printf("%d\n", b1.price);
//	printf("%s\n", pb->name);
//	printf( "%d\n",pb->price);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//
//}
//int main() 
//{
//	int num1 = 10;
//	int num2 = 34;
//	if (num1 > num2)
//		printf("%d\n", num1);
//	else
//		printf("%d\n",num2);
//	return 0;
//
//	
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//enum color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum color color1 = BLUE;
//	return 0;
//}
//#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	return 0;
//}
//int main() 
//{
//	const int num1 = 2;
//	printf("%d\n", num1);
//	num1 = 5;
//	printf("%d\n", num1);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//	      
//}
