#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

//int menu(){
//	printf("#######################################\n");
//	printf("           1. 开始游戏!\n");
//	printf("           0. 退出游戏!\n");
//	printf("#######################################\n");
//	printf("请输入您的选择: ");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//void game(){
//	//1.程序自动生成一个1~100的随机整数。   计算机生成随机数通常都是伪随机。
//	int toGuess = rand() % 100 + 1;
//	while (1){
//		//2.从控制台读取用户的输入。
//		printf("请输入要猜的数字: ");
//		int input = 0;
//		scanf("%d", &input);
//		if (toGuess == input){
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//		else if (toGuess > input){
//			printf("猜小了!\n");
//		}
//		else{
//			printf("猜大了!\n");
//		}
//
//	}
	//3.比较用户输入的数字和系统生成的数字之间的关系，并给用户提示。
	
//}
int main()
{

	/*for (int i = 1; i < 100; i++){
		if (i % 3 == 0){
			printf("%d ", i);
		}
	}*/
	/*printf("请输入3个数据：");
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
	//srand(time(0));//时间戳可以使随机种子一直在变化。
	//while (1){
	//	//写一个打印菜单的函数，和用户进行交互。
	//	int choice = menu();
	//	if (choice == 1){
	//		game();
	//	}
	//	else if(choice == 0){
	//		printf("程序退出，再见!\n"); 
	//	}
	//	else{
	//		printf("你输入有误，请重新输入!\n");
	//	}
	//}
	system("pause");
	return 0;
}