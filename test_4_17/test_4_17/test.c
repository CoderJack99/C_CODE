#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {10,11,12,13,14,15,16,17,18,19};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	/*printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");*/
//	/*printf("I lost my cellphone\n");*/
//	/*int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n",r);*/
//
//
//	char arr1[] = {'b','i','t'}; 
//	printf("%d\n",strlen(arr1));//random,找不到'\0'
//	char arr2[4] = {'b','i','t'};
//	//  '\0'的ASCII值为0
//	printf("%d\n",strlen(arr2));//3
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int r = Max(a,b);
//	printf("%d\n",r);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int fun(int x)
//{
//	if (x < 0)
//		return 1;
//	else if (x == 0)
//		return 0;
//	else
//		return (-1);
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d",&x);
//	int r = fun(x);
//	printf("%d\n",r);
//	return 0;
//}


#include<stdio.h>
#include<string.h>

int main()
{
	int a = 7 / 2;
	int b = 7 % 2;
	float c = 7 / 2.0;
	printf("%d\n",a);//3
	printf("%d\n",b);//1
	printf("%f\n",c);//3.500000
	printf("%.1f\n",c);//3.5
	printf("%.2f\n",c);//3.50

	int d = (int)3.14;
	//字面浮点数，编译器默认理解为double类型
	printf("%d\n",d);//3

	int e = 10;
	int f = 20;
	int r = (e > f ? e : f);
	printf("%d\n",r);//20

	int g = 10;
	int h = 20;
	int i = 0;
	int s = (i=g-2,g=h+i,i-3+g);
	printf("%d\n",s);//33
	return 0;
}