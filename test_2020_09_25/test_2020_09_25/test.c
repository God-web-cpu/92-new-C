#include <stdio.h>//必须写
#include <windows.h>//仅仅是为了让程序暂停一下，让我们看到结果。
#pragma warning (disable:4996)

//int g = 100;

//#define MAX 100  //宏定义

//枚举
//int集合：
//enum{
//	RED = 100,
//	YELLOW,
//	BLACK,
//	BLUE
//};
int main()
{

	char str1[16] = "bit";
	char str2[16] = {'b','i','t'};
	char str3[16] = { 'b', 'i', 't','\0' };
	printf("%s\n", str1);
	printf("%s\n", str2);//可能出现乱码
	printf("%s\n", str3);


	////字符串用数组保存
	//char str[16] = "hello";
	//printf("%s\n", str);
	
	//C字符串默认以‘\0’结尾。
	//printf("%d\n", sizeof("abcd"));//5   a b c d \0
	//printf("%d\n", sizeof("a"));//2      a  \0
	//printf("%d\n", sizeof(""));//1       \0


	//int a = 100;//初始化
	//a = 200;//赋值
	//const int b = 3;//用const修饰变量定义，被修饰的变量，不能被直接修改。
	//printf("%d\n", a);
	//printf("%d\n", b);
	/*int a = RED;
	int b = YELLOW;
	printf("%d\n", a);
	printf("%d\n", b);*/


	/*int a = MAX;
	printf("MAX : %d\n", MAX);
	printf("a:%d\n", a);*/


	/*int num1 = 0;
	int num2 = 0;
	printf("请输入两个数据：");
	scanf("%d %d", &num1, &num2);
	int result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);*/
	//printf("num1:%d , num2:%d\n", num1, num2);
	////不建议全局变量和局部变量同名
	//int g = 100;
	//g = 200;
	//printf("value: %d\n", g);//局部变量优先使用
	//
	////各数据类型的大小：
	////sizeof:关键字是用来进行类型大小计算的
	////不同类型，所占用的字节大小是不同的
	//printf("char:%d\n", sizeof(char));
	//printf("short:%d\n", sizeof(short));
	//printf("int:%d\n", sizeof(int));
	//printf("long:%d\n", sizeof(long));
	//printf("long long:%d\n", sizeof(long long));
	//printf("float:%d\n", sizeof(float));
	//printf("double:%d\n", sizeof(double));

	//char c = 'x';//内存中开辟了一个字节大小的空间
	//int i = 10;
	//double d = 3.14;
	//float f = 2.14f;

	////printf("hello world!\n");
	system("pause");//仅仅是为了让程序暂停一下，让我们看到结果。
	return 0;
}

