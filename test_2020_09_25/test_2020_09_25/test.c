#include <stdio.h>//����д
#include <windows.h>//������Ϊ���ó�����ͣһ�£������ǿ��������
#pragma warning (disable:4996)

//int g = 100;

//#define MAX 100  //�궨��

//ö��
//int���ϣ�
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
	printf("%s\n", str2);//���ܳ�������
	printf("%s\n", str3);


	////�ַ��������鱣��
	//char str[16] = "hello";
	//printf("%s\n", str);
	
	//C�ַ���Ĭ���ԡ�\0����β��
	//printf("%d\n", sizeof("abcd"));//5   a b c d \0
	//printf("%d\n", sizeof("a"));//2      a  \0
	//printf("%d\n", sizeof(""));//1       \0


	//int a = 100;//��ʼ��
	//a = 200;//��ֵ
	//const int b = 3;//��const���α������壬�����εı��������ܱ�ֱ���޸ġ�
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
	printf("�������������ݣ�");
	scanf("%d %d", &num1, &num2);
	int result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);*/
	//printf("num1:%d , num2:%d\n", num1, num2);
	////������ȫ�ֱ����;ֲ�����ͬ��
	//int g = 100;
	//g = 200;
	//printf("value: %d\n", g);//�ֲ���������ʹ��
	//
	////���������͵Ĵ�С��
	////sizeof:�ؼ����������������ʹ�С�����
	////��ͬ���ͣ���ռ�õ��ֽڴ�С�ǲ�ͬ��
	//printf("char:%d\n", sizeof(char));
	//printf("short:%d\n", sizeof(short));
	//printf("int:%d\n", sizeof(int));
	//printf("long:%d\n", sizeof(long));
	//printf("long long:%d\n", sizeof(long long));
	//printf("float:%d\n", sizeof(float));
	//printf("double:%d\n", sizeof(double));

	//char c = 'x';//�ڴ��п�����һ���ֽڴ�С�Ŀռ�
	//int i = 10;
	//double d = 3.14;
	//float f = 2.14f;

	////printf("hello world!\n");
	system("pause");//������Ϊ���ó�����ͣһ�£������ǿ��������
	return 0;
}

