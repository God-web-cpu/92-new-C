#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning (disable:4996)

//int factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}
int main()
{
	
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int toFind = 11;
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind > arr[mid]){
			left = mid + 1;
		}
		else if (toFind < arr[mid]){
			right = mid - 1;
		}
		else{
			printf("�ҵ��ˣ��±�Ϊ��%d\n",mid);
			break;
		}
	}
	if (left>right){
		printf("��Ԫ�ز�����!\n");
	}*/
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int toFind = 4;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right){
		int mid = (right + left) / 2;
		if (arr[mid] < toFind){
			left = mid + 1;
		}
		else if (arr[mid] > toFind){
			right = mid - 1;
		}
		else{
			printf("�ҵ��ˣ��±�Ϊ%d\n",mid);
			break;
		}
	}
	if (left > right){
		printf("��Ԫ�ز����ڣ�\n");
	}
*/

	/*int arr[] = { 9, 5, 2, 7, 3, 6, 8 };
	int toFind = 3;
	for (int i = 0; i < 7; i++){
		if (arr[i] == toFind){
			printf("�ҵ���,�±�Ϊ%d\n", i);
			break;
		}
	}*/

	//for (int i = 0; i < 3; i++){
	//	char input[20] = { 0 };
	//	char password[20] = "888888";
	//	printf("���������룺");
	//	scanf("%s", input);//scanf��ȡ�ַ�������Ҫ��&
	//	if (strcmp(input, password) == 0){                           //C�����в���ʹ��==���Ƚ��ַ���������
	//		printf("��¼�ɹ���\n");
	//		break;
	//	}
	//	else{
	//		printf("��¼ʧ�ܣ�\n");
	//	}
	//}

	/*char str1[] = "welcome to bit!";
	char str2[] = "###############";
	int left = 0;
	int right = strlen(str1) - 1;
	printf("%s\n", str2);
	while (left <= right){
		str2[left] = str1[left];
		str2[right] = str1[right];
		Sleep(1000);
		system("cls");
		printf("%s\n", str2);
		left++;
		right--;
	}*/
	/*int n = 10;
	int sum = 0;
	for (int i = 1; i <= 10; i++){
		sum += factor(i);
	}
	printf("sum = %d\n", sum);*/
	//����1��+2��+3��+������������+10��
	/*int n = 10;
	int sum = 0;
	for (int i = 1; i <= n; i++){
		int result = 1;
		for (int j = 1; j <= i; j++){
			result *= j;
		}
		sum += result;
	}
	printf("sum:%d\n", sum);
*/

	//����n�Ľ׳ˡ�
	/*int n = 0;
	printf("������n��ֵ��");
	scanf("%d", &n);
	int result = 1;
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	printf("%d\n", result);*/
	/*int num = 1;
	do{
		printf("%d\n",num);
		num++;
	} while (num <= 10);*/
	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 0; i++, k++){       //k = 0Ϊ��,����ֹͣ����.
	//	k++;
	//	printf("hahaha\n");
	//}
	//for (int i = 1; i <= 5; i++){
	//	if (i == 3){
	//		//continue;
	//		break;
	//	}
	//	printf("���ڳԵ�%d������\n", i);
	//}
	/*for (int i = 1; i <= 10; i++){
		printf("%d\n", i);
	}*/
	//����1+2+3+4+.......+100
	/*int sum = 0;
	int num = 1;
	while (num <= 100){
		sum += num;
		num++;
	}
	printf("%d\n", sum);*/
	system("pause");
	return 0;
}