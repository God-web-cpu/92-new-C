#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)
//void test(){
//	//int i = 0;
//	static int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//extern int g_val;//声明变量
//结构体
//struct  Stu{
//	char name[20];
//	int age;
//	char sex[5];
//	char telephone[20];
//};
int main()
{

	/*int ch = 0;
	while ((ch = getchar()) != EOF){
		putchar(ch);
	}
	printf("%d\n", ch);*/
	
	/*int day = 0;
		printf("请输入：");
		scanf("%d", &day);
		switch (day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("weekday!!!\n");
			break;
		case 6:
		case 7:
			printf("weekend!!!\n");
			break;
		default:
			printf("请输入《1~7》\n");
			break;
		}*/


//	int day = 0;
//	printf("请输入：");
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//		printf("星期一!!!\n");
//		break;
//	case 2:
//		printf("星期二!!!\n");
//		break;
//	case 3:
//		printf("星期三!!!\n");
//		break;
//	case 4:
//		printf("星期四!!!\n");
//		break;
//	case 5:
//		printf("星期五!!!\n");
//		break;
//	case 6:
//		printf("星期六!!!\n");
//		break;
//	case 7:
//		printf("星期七!!!\n");
//		break;
//	default:
//		printf("请输入《1~7》\n");
//		break;
//	}
	//输出1--100之间的奇数
	/*for (int x = 1; x < 100; x++){
		if (x & 1){
			printf("%d是奇数\n",x);
		}
	}*/
	//判断一个数是否为奇数
	/*int x = 0;
	scanf("%d", &x);
	if (x % 2 == 1){
		printf("%d是奇数\n", x);
	}
	else{
		printf("%d是偶数\n", x);
	}*/
	/*int x = 0;
	scanf("%d", &x);
	if (x & 1){
		printf("%d是奇数\n", x);
	}
	else{
		printf("%d是偶数\n", x);
	}*/

	/*while (1){
		printf("请输入你的年龄： ");
		int age = 0;
		scanf("%d", &age);
		if (age < 18){
			printf("你还是翩翩少年！\n");
		}
		else if (age>18 && age < 30){
			printf("你已经变成了骚年！\n");
		}
		else if (age > 30 && age < 50){
			printf("你已经变成了中年！\n");
		}
		else{
			printf("你已经变成了老年！\n");
		}
	}*/
	/*struct Stu Tom = { "Tom", 19, "男", "123456789" };
	struct Stu *p = &Tom;
	printf("%s %s\n", Tom.name, Tom.telephone);
	printf("%s %s\n", (*p).name, (*p).telephone);
	printf("%d %s\n", p->age, p->sex);
*/
	//int a = 10;
	//printf("%p\n", &a);//a的地址
	//int *p = &a;
	//printf("p = %p\n", p);//p的内容:a的地址
	//printf("*p = %d\n", *p);//解引用，代表指针所指向的目标。*p == a。
	/*int a = 10;
	int* p = &a;*///指针变量:要开辟空间，有变量名，有变量内容。
	/*for (int i = 0; i < 10; i++){
		test();
	}*/
	//printf("g_val = %d\n", g_val);
	system("pause");
	return 0;
}