#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)

//int IsPrime(int num){
//	if (num == 1 || num == 2){
//		return 1;
//	}
//	for (int i = 2; i < num; i++){
//		if (num % 2 == 0){
//			return 0;
//		}
//	}
//	return 1;
//}

//int binarySearch(int arr[],int len, int toFind){
//	int left = 0;
//	int right = len - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}


//void func(int* num){
//	(*num)++;
//}

//int factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}

//int factor(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n*factor(n - 1);
//}

void printNum(int n){
	if (n > 9){
		printNum(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	printNum(num);

	/*int n = 5;
	int ret = factor(n);
	printf("ret = %d\n", ret);
*/

	/*int num = 0;
	func(&num);
	printf("num = %d\n", num);*/


	/*int arr[] = { 2, 3, 5, 7, 8, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = binarySearch(arr,len,10);
	printf("ret = %d\n", ret);*/


	/*for (int i = 1; i < 10; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d =%2d    ", i, j, i*j);
		}
		printf("\n");
	}*/

	/*int arry[10], max;
	printf("������10�������� ");
	for (int i = 0; i < 10; i++){
		scanf("%d", &arry[i]);
	}
	max = arry[0];
	for (int i = 1; i < 10; i++){
		if (arry[i]>max){
			max = arry[i];
		}
	}
	printf("���������ǣ�%d\n", max);*/

	/*double sum = 0;
	int flag = 1;
	for (int i = 1; i <= 100; i++){
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("sum:%f\n", sum);
*/
	/*double sum = 0;
	int flag = 1;
	for (int i = 1; i <= 100; i++){
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("sum:%f\n", sum);*/
	  //��һ��9�ĸ���
	/*int count = 0;
	for (int i = 0; i < 100; i++){
		if (i % 10 == 9){
			count++;
		}
		if (i / 10 == 9){
			count++;
		}
	}
	printf("count:%d\n", count);
*/
	//��ӡ����
	/*for (int i = 100; i <= 200; i++){
		int j;
		for (j = 2; j < i; j++){
			if (i%j == 0){
				break;
			}
		}
		if (i == j){
			printf("%d������\n", i);
		}
	}*/
	//��ӡ����
	/*for (int year = 1000; year <= 2000; year++){
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){

			printf("%d������!\n", year);
		}
	}*/

	//�����Լ��
	/*printf("��������������: ");
	int x, y;
	scanf("%d %d", &x, &y);
	int rem;
	int count = 0;
	while ((rem = x%y) != 0){
		x = y;
		y = rem;
		count++;
	}
	printf("���Լ����:%d\n", y);
	printf("����:%d\n", count);*/




	//������ٷ�
	/*printf("��������������: ");
	int x, y;
	scanf("%d %d", &x, &y);
	int min = x > y ? y : x;
	int count = 0;
	for (int i = min; i > 1; i--){
		count++;
		if (x%i == 0 && y%i == 0){
			printf("���Լ����:%d\n", i);
			printf("����:%d\n", count);
			break;
		}

	}*/
	system("pause");
	return 0;
}