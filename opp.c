void opp(int arr[], int size) {
    // ������
    for (int i = 0; i < size; i++) {//�������
        arr[i] = arr[i] == 0 ? 1 : 0;//��Ŀ��������൱��if��������1��������2
    }
    // �ټ� 1
    int carry = 1;
    for (int i = size - 1; i >= 0; i--) {//��λ��һ
        int sum = arr[i] + carry;
        arr[i] = sum % 2;
        carry = sum / 2;
        if (carry == 0) {
            break;
        }
    }
}
void pa(int arr[], int size)    //��ӡarr
{
    if (arr[0] == 1) {
        opp(arr, size);
        arr[0] = 1;//������ԭ���ʾ
    }
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

/*int main() {
    int binaryArray[] = { 0,1,0,1 };
    int size = sizeof(binaryArray) / sizeof(binaryArray[0]);
    printf("ԭ����������");
    printArray(binaryArray, size);
    opp (binaryArray, size);
    printf("���룺");
    pa(binaryArray, size);
    return 0;
}*/