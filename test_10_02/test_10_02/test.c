#include <stdio.h>
#include <Windows.h>
#include <time.h>
#pragma warning (disable:4996)

//冒泡排序
//void bubbleSort(int arr[], int size){
//	for (int bound = 0; bound < size; bound++){
//		for (int cur = size - 1; cur>bound; cur--){
//			if (arr[cur - 1] > arr[cur]){
//				int tmp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}


#define MAX_ROW 3
#define MAX_COL 3


void init(char chessBoard[MAX_ROW][MAX_COL]){
	//把数组中每个元素都设置为空格
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
//三子棋
//棋盘，使用三行三列的二维数组来表示。元素类型是char。
//此时，使用‘x’便是玩家，‘o’便是电脑。‘ ’ 表示棋盘的空白区域。
//一局游戏的基本流程
//1.创建棋盘初始化
//2.打印棋盘
//3.玩家落子（玩家输入行列坐标的方式落子）
//4.判定胜负关系
//5.电脑落子（随即位置落子）
//6.判定胜负关系
//回到2继续执行

int menu(){
	printf("================================\n");
	printf("1.开始游戏!\n");
	printf("0.结束游戏!\n");
	printf("================================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
	/*for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			printf("%c ", chessBoard[row][col]);
		}
		printChessBoard("\n");
	}*/
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("请玩家输入坐标（row col）：");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row<0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("您的坐标不在合法范围内[0 ,2]\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			printf("您的坐标位置已经有子了!\n");
			continue;
		}
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
int isFull(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (chessBoard[row][col] == ' '){
				return 0;
			}
		}

	}
	return 1;
}
char isWin(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' ' && chessBoard[row][0] == chessBoard[row][1] && chessBoard[row][0] == chessBoard[row][2]){
			return chessBoard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] && chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
    }
	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][2]){
		return chessBoard[0][0];
	}
	if (chessBoard[2][0] != ' ' && chessBoard[2][0] == chessBoard[1][1] && chessBoard[2][0] == chessBoard[0][2]){
		return chessBoard[2][0];
	}
	if (isFull(chessBoard)){
		return 'q';
	}
	return ' ';
}
void game(){
	//1.创建棋盘初始化
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);
	char winner = ' ';
	while (1){
		//2.打印棋盘
		printChessBoard(chessBoard);
		//3.玩家落子（玩家输入行列坐标的方式落子）
		playerMove(chessBoard);
		//4.判定胜负关系
		winner = isWin(chessBoard);
		if (winner != ' '){
			break;
		}
		//5.电脑落子（随即位置落子）
		computerMove(chessBoard);
		//6.判定胜负关系
		winner = isWin(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner = 'x'){
		printf("恭喜您，您赢了!\n");
	}
	else if(winner == 'o'){
		printf("很遗憾，您连人工智障都下不过!\n");
	}
	else {
		printf("您和人工智障五五开!\n");
	}
}
int main()
{
	srand((unsigned int)time(0));
	//此处通过简单的交互菜单和玩家交互进行开始一局游戏
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
	}




	/*int arr[] = { 9, 5, 2, 7 };
	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("%d ", arr[i]);
	}*/

	/*int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 },{9, 10, 11, 12} };
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/
	system("pause");
	return 0;
}