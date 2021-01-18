#include <stdio.h>
#include <Windows.h>
#include <string.h>

//int prime(int num){
//	for (int i = 2; i < num; i++){
//		if (num % i == 0){
//			return -1;
//		}
//	}
//	return 0;
//}

//int year(int num){
//	if (num % 4 == 0 && num % 100 != 0 || num % 400 == 0){
//		return 0;
//	}
//	return -1;
//}

//void myswap(int *a, int *b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

//void mul(int num){
//	for (int i = 1; i <= num; i++){
//		for (int j = 1; j <= i; j++){
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void print(int num){
//	if (num < 10){
//		printf("%d ", num );
//		return ;
//	}
//		print(num / 10);
//		printf("%d ", num % 10);
//		return;
//}

//int fact(int n){
//	int num = 1;
//	for (int i = 1; i <= n; i++){
//		num *= i;
//	}
//	return num;
//}

//int fact(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n * fact(n - 1);
//}

//int mystrlen(char* str){
//	int len = 0;
//	while (*str != '\0'){
//		len++;
//		str++;
//	}
//	return len;
//}

//int mystrlen(char* str){
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + mystrlen(str+1);
//}


//char* reverse(char* str){
//	char* start = str;
//	char* end = str + strlen(str) - 1;
//	for(; start < end; start++, end--){
//		char ch = *start;
//		*start = *end;
//		*end = ch;
//	}
//	return str;
//}

//char* reverse(char* str){
//	if (strlen(str)<2){
//		return str;
//	}
//	char ch = *str;
//	int len = strlen(str) - 1;
//	*str = *(str + len);
//	*(str + len) = '\0';
//	
//	reverse(str + 1);
//	*(str + len) = ch;
//	return str;
//}
//
//int fib(int num){
//	if (num == 1){
//		return 1;
//	}
//	if (num == 2){
//		return 1;
//	}
//	int last1 = 1;
//	int last2 = 1;
//	int cur = 0;
//	for (int i = 3; i <= num; i++){
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
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
	/*int result = fib(5);
	printf("result = %d\n", result);*/
	/*char tmp[] = "hello bit!";
	printf("%s\n", reverse(tmp));*/
	
	//printf("%d\n", mystrlen("hello world"));
	//printf("%d\n", fact(5));


	//print(4583);



	/*mul(9);*/

	/*int a = 10;
	int b = 20;
	myswap(&a, &b);
	printf("%d %d\n", a, b);*/

	/*for (int i = 1000; i <= 2000; i++){
		if (year(i) == 0){
			printf("%dÊÇÈòÄê!\n",i);
		}
	}
*/
	/*for (int i = 100; i <= 200; i++){
		if (prime(i) == 0){
			printf("%d ", i);
		}
	}*/
	system("pause");
	return 0;
}
//int strLen(char str[]){
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++){
//		count++;
//	}
//	return count;
//}

//int strLen(char str[]){
//	if (str[0] == '\0'){
//		return 0;
//	}
//	return 1 + strLen(str + 1);
//}

//ì³²¨ÄÇÆõ
//int fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int fib(n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	int last1 = 1;
//	int last2 = 1;
//	int cur = 0;
//	for (int i = 3; i <= n; i++){
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
//}

//int prime(int num){
//	for (int i = 2; i < sqrt(num); i++){
//		if (num % i == 0){
//			return -1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++){
//		if (prime(i) == 0){
//			printf("%d\n", i);
//		}
//	}


	//int arr[3][4];

	/*int arr[10] = { 0 };
	for (int i = 0; i < 10; i++){
		printf("%p\n", &arr[i]);
	}*/
	/*int result = fib(50);
	printf("%d\n", result);*/
	/*char str[] = "hehe";
	int ret = strLen(str);
	printf("ret = %d\n", ret);*/
	//printf("%d\n", strlen(str));
	/*system("pause");
	return 0;
}*/