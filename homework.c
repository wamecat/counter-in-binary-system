//八位二进制数能跑，但是21位二进制数跑不了，正在检查
#include<stdio.h>
void transfer(int num,int arr[],int size);
void opp(int arr[], int size);
void pa(int arr[], int size);
int and (int n1, int n2,int c);
int main() {
	int arr1[8];
	int arr2[8];
	int s[8] = { 0 }; int co[8] = { 0 };
	int size1 = sizeof(arr1)/4;
	int size2 = sizeof(arr2)/4;
	
	printf("请选择运算:1加法，2减法，3乘法，4,除法;q to quit\n");
	int sign =3;
	//scanf("%D", &sign);
	//选择计算符
	printf("请按顺序输入要计算的两个数字\n");
	int num1 =10; int num2 = 8;
	//scanf("%d %d", &num1, &num2);
	//printf("***%d***", 0^0^0);测试
	transfer(num1, arr1, size1);
	transfer(num2, arr2, size2);
	//将输入数字转化成补码数组
	if (sign == 1)//加法

	{
		s[7] = arr1[7] ^ arr2[7];
		co[7] = and (arr1[7], arr2[7],0);
			for (int i =6; i >= 0; i--) {
			co[i] =and (arr1[i], co[i + 1], arr2[i]);
			s[i] = arr1[i]^arr2[i]^co[i+1];

		}

	}


	else if (sign == 2) {
		opp(arr2, sizeof(arr2));
		s[7] = arr1[7] ^ arr2[7];
		co[7] = and (arr1[7], arr2[7], 0);
		for (int i = 6; i >= 0; i--) {
			co[i] = and (arr1[i], co[i + 1], arr2[i]);
			s[i] = arr1[i] ^ arr2[i] ^ co[i + 1];


		}
	}



	else if (sign == 3) {
		if (num2 >= 2) {
			s[7] = arr1[7] ^ arr1[7];
			co[7] = and (arr1[7], arr1[7], 0);
			for (int i = 6; i >= 0; i--) {
				co[i] = and (arr1[i], co[i + 1], arr1[i]);
				s[i] = arr1[i] ^ arr1[i] ^ co[i + 1];


			}
			while(num2-2>0)
			{
				s[7] = s[7] ^ arr1[7];
				co[7] = and (s[7], arr1[7], 0);
				for (int i = 6; i >= 0; i--) {
					co[i] = and (s[i], co[i + 1], arr1[i]);
					s[i] = s[i] ^ arr1[i] ^ co[i + 1];


				}
				num2--;
			}
		}
		
	}

	else if (sign == 4) {
		if (num1 < num2) {
			printf("余数是：");
				pa(arr1, sizeof(arr1) / 4);
				printf("商是：");
		}
		else if (num1 == num2) {
			printf("余数是：");
				pa(s, sizeof(s) / 4);
				printf("商是：");
		}
		else {
			printf("余数是：");
			int y = num1 % num2;
			int sh = num1 / num2;
			transfer(y, arr1,sizeof(arr1)/4);
			transfer (sh, s,sizeof(s)/4);
			pa(arr1, sizeof(arr1) / 4);
			printf("商是：");
		}
	}
	
		



	else {
		printf("不存在该运算符");
		return 0;
	}
		


	int size = sizeof(s)/4;
	pa(s, size);

	return 0;
}
//#include <stdio.h>
//void transfer(int num, int arr[], int size);
//void opp(int arr[], int size);
//void pa(int arr[], int size);
//int and (int n1, int n2, int c);
//int main() {
//	int arr1[21];
//	int arr2[21];
//	int s[21]; int co[21] = { 0 };
//	int size1 = sizeof(arr1) / 4;
//	int size2 = sizeof(arr2) / 4;
//
//	printf("请选择运算:1加法，2减法，3乘法，4,除法;q to quit\n");
//	int sign = 2;
//	//scanf("%D", &sign);
//	//选择计算符
//	printf("请按顺序输入要计算的两个数字\n");
//	int num1 = 2; int num2 = -3;
//	//scanf("%d %d", &num1, &num2);
//	//printf("***%d***", 0^0^0);测试
//	transfer(num1, arr1, size1);
//	transfer(num2, arr2, size2);
//	//将输入数字转化成补码数组
//	if (sign == 1)//加法
//
//	{
//		s[20] = arr1[20] ^ arr2[20];
//		co[20] = and (arr1[20], arr2[20], 0);
//		for (int i = 19; i >= 0; i--) {
//			co[i] = and (arr1[i], co[i + 1], arr2[i]);
//			s[i] = arr1[i] ^ arr2[i] ^ co[i + 1];
//
//		}
//
//	}
//
//
//	else if (sign == 2) {
//		opp(arr2, sizeof(arr2));
//		s[20] = arr1[20] ^ arr2[20];
//		co[20] = and (arr1[20], arr2[20], 0);
//		for (int i = 19; i >= 0; i--) {
//			co[i] = and (arr1[i], co[i + 1], arr2[i]);
//			s[i] = arr1[i] ^ arr2[i] ^ co[i + 1];
//
//
//		}
//	}
//
//
//
//	//else if (sign == 3) {
//
//	//}
//
//	/*else if (sign == 4) {
//
//	}
//
//
//
//
//	else{
//	printf("不存在该运算符");
//		return 0;*/
//
//
//
//
//	int size = sizeof(s) / 4;
//	pa(s, size);
//
//	return 0;
//}