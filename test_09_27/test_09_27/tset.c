#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)
//void test(){
//	//int i = 0;
//	static int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//extern int g_val;//��������
//�ṹ��
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
		printf("�����룺");
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
			printf("�����롶1~7��\n");
			break;
		}*/


//	int day = 0;
//	printf("�����룺");
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//		printf("����һ!!!\n");
//		break;
//	case 2:
//		printf("���ڶ�!!!\n");
//		break;
//	case 3:
//		printf("������!!!\n");
//		break;
//	case 4:
//		printf("������!!!\n");
//		break;
//	case 5:
//		printf("������!!!\n");
//		break;
//	case 6:
//		printf("������!!!\n");
//		break;
//	case 7:
//		printf("������!!!\n");
//		break;
//	default:
//		printf("�����롶1~7��\n");
//		break;
//	}
	//���1--100֮�������
	/*for (int x = 1; x < 100; x++){
		if (x & 1){
			printf("%d������\n",x);
		}
	}*/
	//�ж�һ�����Ƿ�Ϊ����
	/*int x = 0;
	scanf("%d", &x);
	if (x % 2 == 1){
		printf("%d������\n", x);
	}
	else{
		printf("%d��ż��\n", x);
	}*/
	/*int x = 0;
	scanf("%d", &x);
	if (x & 1){
		printf("%d������\n", x);
	}
	else{
		printf("%d��ż��\n", x);
	}*/

	/*while (1){
		printf("������������䣺 ");
		int age = 0;
		scanf("%d", &age);
		if (age < 18){
			printf("�㻹���������꣡\n");
		}
		else if (age>18 && age < 30){
			printf("���Ѿ������ɧ�꣡\n");
		}
		else if (age > 30 && age < 50){
			printf("���Ѿ���������꣡\n");
		}
		else{
			printf("���Ѿ���������꣡\n");
		}
	}*/
	/*struct Stu Tom = { "Tom", 19, "��", "123456789" };
	struct Stu *p = &Tom;
	printf("%s %s\n", Tom.name, Tom.telephone);
	printf("%s %s\n", (*p).name, (*p).telephone);
	printf("%d %s\n", p->age, p->sex);
*/
	//int a = 10;
	//printf("%p\n", &a);//a�ĵ�ַ
	//int *p = &a;
	//printf("p = %p\n", p);//p������:a�ĵ�ַ
	//printf("*p = %d\n", *p);//�����ã�����ָ����ָ���Ŀ�ꡣ*p == a��
	/*int a = 10;
	int* p = &a;*///ָ�����:Ҫ���ٿռ䣬�б��������б������ݡ�
	/*for (int i = 0; i < 10; i++){
		test();
	}*/
	//printf("g_val = %d\n", g_val);
	system("pause");
	return 0;
}