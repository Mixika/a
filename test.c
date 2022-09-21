#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()//main为函数名 大括号为函数体
//{//写主函数
//	printf("yes");
//
//	return 0;
//	//变量（局部变量与全局变量）
//	//打印的整型符号
//	//当局部与全局变量冲突时(名字相同冲突)局部优先
//	//计算机的制作（整型的输入与输出）
//	//scanf(输入）


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a,&b);
	sum = a + b;
	printf("sum=%d\n", sum);

	

	return 0;
}
