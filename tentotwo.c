void transfer(int num1,int arr[],int size)
{//ת��Ϊ���벢���Ƶ�ȫ������arr1��
	if (num1 > 0)
	{
		arr[0] = 0;
		for (int i = 1; i < size; i++)
		{
			arr[size - i] = num1 % 2;
			num1 = num1 / 2;
		}
	}
	else if (num1 < 0)//������С���㣬��������ԭ�룬�����䲹���ʾ����
	{
		arr[0] = 0;
		num1 = -num1;
		for (int i = 1; i < size; i++)
		{
			arr[size - i] = num1 % 2;
			num1 = num1 / 2;
		}
		opp(arr, sizeof(arr));
	}
	else {
		for (int i = 0; i < size; i ++)
			arr[i] = 0;
	}
		

}