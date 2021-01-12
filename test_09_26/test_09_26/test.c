#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning (disable:4996)
//函数的声明与定义
//int MyAdd(int x, int y){           //形式参数
//	return x + y;
//}
//int MySub(int x, int y){
//	return x - y;
//}
//int MyMul(int x, int y){
//	return x * y;
//}
//int MyDiv(int x, int y){
//	return x / y;
//}
//
//int MyAdd(int _a , int _b){         //形参
//	printf("after:_a: %p , _b: %p\n", &_a, &_b);
//	printf("after:_a: %d , _b: %d\n", _a, _b);
//	int _res = _a + _b;
//	return _res;
//}
//int MyMax(int x, int y)
//{
//	return x > y ? x : y;
//}
//int MyMax(int x, int y){
//	return x > y ? x : y;
//}
void show(){
	//static修饰局部变量的时候，有两个作用：
	//1.作用域：在本代码块有效，用static修饰，这个作用不变。
	//2.生命周期：临时性，ststic修饰，则该变量的生命周期变成全局属性。
	//3.注意事项：int i = 0；初始化，任何一个变量都只会初始化一次。
	//static int i = 0;//
	int i = 0;//临时变量具有临时性
	++i;
	printf("i: %d\n", i);
}
int main()
{
	for (int i = 0; i < 10; i++){
		show();
	}
	/*int x, y;
	printf("please enter two data: ");
	scanf("%d %d", &x, &y);
	printf("Max:%d \n", MyMax(x, y));*/
	/*printf("%d\n", !100);
	printf("%d\n", -10%-3);
	printf("%d\n", -10%3);
	printf("%d\n", 10 % 3);
	printf("%d\n", 10 % -3);*/


	/*int x = 0;
	int y = 0;
	printf("please enter two data# ");
	scanf("%d %d", &x, &y);
	printf("Max: %d\n", MyMax(x, y));*/

	////数组的定义与初始化
	//int arr[] = { 11, 22, 33, 44, 55 };
	//printf("%d\n", sizeof(arr));//求数组的总大小
	//printf("%d\n", sizeof(arr[0]));//求数组的一个元素的大小

	////动态的求出数组的个数
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("num:%d\n", num);
	//数组的遍历
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++){
		printf("arr[%d]: %d \n", i, arr[i]);
	}*/

	//int a = 10;
	//int b = 20;
	//printf("before:a: %p , b: %p\n", &a, &b);
	//printf("before:a: %d , b: %d\n", a, b);
	//int result = MyAdd(a,b); //实参
	//printf("result:%d\n", result);
	
	/*while (1)
	{
		printf("please enter two data: ");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		char op = 'x';
		printf("\n please enter <+ - * /> :");
		scanf(" %c", &op);
		if (op == '+'){
			printf("%d + %d = %d \n", x, y, MyAdd(x, y));         //实参
		}
		else if (op == '-'){
			printf("%d - %d = %d \n", x, y, MySub(x, y));
		}
		else if (op == '*'){
			printf("%d * %d = %d \n", x, y, MyMul(x, y));
		}
		else if (op == '/'){
			if (y != 0){
				printf("%d / %d = %d \n", x, y, MyDiv(x, y));
			}
			else{
				printf("div zero!error!!!\n");
			}
		}
		else{
			printf("enter error!\n");
		}
	}*/
	/*int i = 0;
	printf("你有没有好好学习呢？<0:yes , 1:no>#\n");
	scanf("%d", &i);
	if (i == 0){
		printf("恭喜你\n");
	}
	else{
		printf("抱歉\n");
	}*/
	
	/*printf("\c");
	printf("%d\n",sizeof("\c"));*/

	//printf("%d\n", sizeof("abcdef"));//7    字符串大小，包括“\0”
	//printf("%d\n", strlen("abcdef"));//6    字符串长度，不包括“\0”
	//printf("%d\n",strlen("c:\test\328\test.c"));//14
	//printf("\"");

	//printf("\'");
	//char str1[] = "bit";
	////printf("%d\n", sizeof(str1));
	//char str2[] = {'b','i','t'};
	//char str3[] = { 'b', 'i', 't','\0' };
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//printf("%s\n", str3);
	//printf("\a");//蜂鸣

	system("pause");
	return 0;
}