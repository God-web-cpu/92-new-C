#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

//int menu(){
//	printf("#######################################\n");
//	printf("           1. ��ʼ��Ϸ!\n");
//	printf("           0. �˳���Ϸ!\n");
//	printf("#######################################\n");
//	printf("����������ѡ��: ");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//void game(){
//	//1.�����Զ�����һ��1~100�����������   ��������������ͨ������α�����
//	int toGuess = rand() % 100 + 1;
//	while (1){
//		//2.�ӿ���̨��ȡ�û������롣
//		printf("������Ҫ�µ�����: ");
//		int input = 0;
//		scanf("%d", &input);
//		if (toGuess == input){
//			printf("��ϲ�㣬�¶���!\n");
//			break;
//		}
//		else if (toGuess > input){
//			printf("��С��!\n");
//		}
//		else{
//			printf("�´���!\n");
//		}
//
//	}
	//3.�Ƚ��û���������ֺ�ϵͳ���ɵ�����֮��Ĺ�ϵ�������û���ʾ��
	
//}
int main()
{

	/*for (int i = 1; i < 100; i++){
		if (i % 3 == 0){
			printf("%d ", i);
		}
	}*/
	/*printf("������3�����ݣ�");
	int a, b, c,tmp;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b){
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c){
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c){
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d->%d->%d\n", a, b, c);*/
	/*int sum = 0;
	for (int i = 0; i < 10; i++){
		sum += i;
		printf("%d\n", i);
	}
	printf("%d\n", sum);*/
	//srand(time(0));//ʱ�������ʹ�������һֱ�ڱ仯��
	//while (1){
	//	//дһ����ӡ�˵��ĺ��������û����н�����
	//	int choice = menu();
	//	if (choice == 1){
	//		game();
	//	}
	//	else if(choice == 0){
	//		printf("�����˳����ټ�!\n"); 
	//	}
	//	else{
	//		printf("��������������������!\n");
	//	}
	//}
	system("pause");
	return 0;
}