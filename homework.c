//��λ�����������ܣ�����21λ���������ܲ��ˣ����ڼ��
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
	
	printf("��ѡ������:1�ӷ���2������3�˷���4,����;q to quit\n");
	int sign =3;
	//scanf("%D", &sign);
	//ѡ������
	printf("�밴˳������Ҫ�������������\n");
	int num1 =10; int num2 = 8;
	//scanf("%d %d", &num1, &num2);
	//printf("***%d***", 0^0^0);����
	transfer(num1, arr1, size1);
	transfer(num2, arr2, size2);
	//����������ת���ɲ�������
	if (sign == 1)//�ӷ�

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
			printf("�����ǣ�");
				pa(arr1, sizeof(arr1) / 4);
				printf("���ǣ�");
		}
		else if (num1 == num2) {
			printf("�����ǣ�");
				pa(s, sizeof(s) / 4);
				printf("���ǣ�");
		}
		else {
			printf("�����ǣ�");
			int y = num1 % num2;
			int sh = num1 / num2;
			transfer(y, arr1,sizeof(arr1)/4);
			transfer (sh, s,sizeof(s)/4);
			pa(arr1, sizeof(arr1) / 4);
			printf("���ǣ�");
		}
	}
	
		



	else {
		printf("�����ڸ������");
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
//	printf("��ѡ������:1�ӷ���2������3�˷���4,����;q to quit\n");
//	int sign = 2;
//	//scanf("%D", &sign);
//	//ѡ������
//	printf("�밴˳������Ҫ�������������\n");
//	int num1 = 2; int num2 = -3;
//	//scanf("%d %d", &num1, &num2);
//	//printf("***%d***", 0^0^0);����
//	transfer(num1, arr1, size1);
//	transfer(num2, arr2, size2);
//	//����������ת���ɲ�������
//	if (sign == 1)//�ӷ�
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
//	printf("�����ڸ������");
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