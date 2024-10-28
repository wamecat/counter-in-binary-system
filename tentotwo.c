void transfer(int num1,int arr[],int size)
{//转换为补码并复制到全局数组arr1中
	if (num1 > 0)
	{
		arr[0] = 0;
		for (int i = 1; i < size; i++)
		{
			arr[size - i] = num1 % 2;
			num1 = num1 / 2;
		}
	}
	else if (num1 < 0)//若数字小于零，先求正数原码，再求其补码表示负数
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