#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	printf("%d\n",100);
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("Hello World!\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个整数\n");
//	scanf("%d %d",&num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = 20;
//	printf("%d\n",a);
//	return 0;
//}


//#define NUM1 10
//#define STR "abcdef"
//#include<stdio.h>
//int main()
//{
//	int arr[NUM1] = {0};
//	printf("%d\n",arr[5]);
//	printf("%s\n",STR);
//	return 0;
//}



//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	enum Color c = BLUE;
//	printf("%d\n",a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {'a','b','c','d','e','f','\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%d\n", strlen(arr1));//6
//	printf("%d\n", strlen(arr2));//6
//
//
//	%d
//	%f
//	%lf
//	%c
//	%s
//	printf("abc\0def");//abc
//	printf("%c\n",'\'');
//	printf("\a");
//	printf("abc\ndef");
//	printf("%c\n",'\130');
//	printf("%c\n",'\x63');
//	\ddd
//	\xdd
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int line = 0;
//	while (line<=2000)
//	{
//		printf("coding:%d\n",line);
//		line++;
//	}
//
//	if (line <= 2000)
//	{
//		printf("coding:%d\n",line);
//	}
//	else
//	{
//		printf("success\n");
//	}
//	return 0;
//}


#include<stdio.h>

int Add(int x, int y)
{
	return (x+y);
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入num1=");
	scanf("%d",&num1);
	printf("请输入num2=");
	scanf("%d", &num2);
	sum = Add(num1,num2);
	printf("sum=%d\n",sum);
	int t1 = -5;
	int t2 = 9;
	int ter = Add(t1,t2);
	printf("ter=%d\n",ter);
	return 0;
}