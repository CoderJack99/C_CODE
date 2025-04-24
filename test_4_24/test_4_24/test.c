#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//typedef--类型重命名
//typedef unsigned int uint;
//int main()
//{
//	unsigned int a = 0;
//	uint b = 1;
//	printf("%d\n%d\n",a,b);
//	return 0;
//}


//static修饰局部变量、全局变量、函数
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//2 2 2 2 2 2 2 2 2 2
//		i++;
//	}
//	return 0;
//}


//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//2 3 4 5 6 7 8 9 10 11
//		i++;
//	}
//	return 0;
//}


extern int g_val;
extern int Add(int x,int y);

int main()
{
	printf("%d\n",g_val);
	int a = 10;
	int b = 20;
	int r = Add(a,b);
	printf("%d\n",r);

	register int num = 3;//建议：3存放到寄存器中
	
	return 0;
}