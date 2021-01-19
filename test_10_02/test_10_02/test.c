#include <stdio.h>
#include <Windows.h>
#include <time.h>
#pragma warning (disable:4996)

//ð������
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
	//��������ÿ��Ԫ�ض�����Ϊ�ո�
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
//������
//���̣�ʹ���������еĶ�ά��������ʾ��Ԫ��������char��
//��ʱ��ʹ�á�x��������ң���o�����ǵ��ԡ��� �� ��ʾ���̵Ŀհ�����
//һ����Ϸ�Ļ�������
//1.�������̳�ʼ��
//2.��ӡ����
//3.������ӣ����������������ķ�ʽ���ӣ�
//4.�ж�ʤ����ϵ
//5.�������ӣ��漴λ�����ӣ�
//6.�ж�ʤ����ϵ
//�ص�2����ִ��

int menu(){
	printf("================================\n");
	printf("1.��ʼ��Ϸ!\n");
	printf("0.������Ϸ!\n");
	printf("================================\n");
	printf("����������ѡ��: ");
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
		printf("������������꣨row col����");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row<0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("�������겻�ںϷ���Χ��[0 ,2]\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			printf("��������λ���Ѿ�������!\n");
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
	//1.�������̳�ʼ��
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);
	char winner = ' ';
	while (1){
		//2.��ӡ����
		printChessBoard(chessBoard);
		//3.������ӣ����������������ķ�ʽ���ӣ�
		playerMove(chessBoard);
		//4.�ж�ʤ����ϵ
		winner = isWin(chessBoard);
		if (winner != ' '){
			break;
		}
		//5.�������ӣ��漴λ�����ӣ�
		computerMove(chessBoard);
		//6.�ж�ʤ����ϵ
		winner = isWin(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner = 'x'){
		printf("��ϲ������Ӯ��!\n");
	}
	else if(winner == 'o'){
		printf("���ź��������˹����϶��²���!\n");
	}
	else {
		printf("�����˹��������忪!\n");
	}
}
int main()
{
	srand((unsigned int)time(0));
	//�˴�ͨ���򵥵Ľ����˵�����ҽ������п�ʼһ����Ϸ
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