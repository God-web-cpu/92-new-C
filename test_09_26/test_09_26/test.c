#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning (disable:4996)
//�����������붨��
//int MyAdd(int x, int y){           //��ʽ����
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
//int MyAdd(int _a , int _b){         //�β�
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
	//static���ξֲ�������ʱ�����������ã�
	//1.�������ڱ��������Ч����static���Σ�������ò��䡣
	//2.�������ڣ���ʱ�ԣ�ststic���Σ���ñ������������ڱ��ȫ�����ԡ�
	//3.ע�����int i = 0����ʼ�����κ�һ��������ֻ���ʼ��һ�Ρ�
	//static int i = 0;//
	int i = 0;//��ʱ����������ʱ��
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

	////����Ķ������ʼ��
	//int arr[] = { 11, 22, 33, 44, 55 };
	//printf("%d\n", sizeof(arr));//��������ܴ�С
	//printf("%d\n", sizeof(arr[0]));//�������һ��Ԫ�صĴ�С

	////��̬���������ĸ���
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("num:%d\n", num);
	//����ı���
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++){
		printf("arr[%d]: %d \n", i, arr[i]);
	}*/

	//int a = 10;
	//int b = 20;
	//printf("before:a: %p , b: %p\n", &a, &b);
	//printf("before:a: %d , b: %d\n", a, b);
	//int result = MyAdd(a,b); //ʵ��
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
			printf("%d + %d = %d \n", x, y, MyAdd(x, y));         //ʵ��
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
	printf("����û�кú�ѧϰ�أ�<0:yes , 1:no>#\n");
	scanf("%d", &i);
	if (i == 0){
		printf("��ϲ��\n");
	}
	else{
		printf("��Ǹ\n");
	}*/
	
	/*printf("\c");
	printf("%d\n",sizeof("\c"));*/

	//printf("%d\n", sizeof("abcdef"));//7    �ַ�����С��������\0��
	//printf("%d\n", strlen("abcdef"));//6    �ַ������ȣ���������\0��
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
	//printf("\a");//����

	system("pause");
	return 0;
}