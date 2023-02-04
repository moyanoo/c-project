#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
//辗转相除法求最大公约数
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	while (a%b) 
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "hello world!!!!";
//	char arr2[] = "###############";
//	int lift = 0;
//	int right = strlen(arr1) - 1;
//
//	while (lift<=right)
//	{
//		arr2[lift] = arr1[lift];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		lift++;
//		right--;
//
//	}
//	return 0;
//}
//二分法
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int  lift = 0;
//	int right = sz - 1;
//
//	while (lift <= right)
//	{
//		int mid = (lift + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < k)
//		{
//			lift = mid + 1;
//		}
//		else 
//		{
//			printf("zhao");
//			break;
//		}
//	}
//	if (lift > right) {
//		printf("wu");
//	}
//	return 0;
//
//}
//int main() 
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	for (int i = 1; i <= 3; i++) 
//	{
//		b = b * i;
//		c = c + b;
//		printf("%d\n", c);
//	}
//	
//	return 0;
//}
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
