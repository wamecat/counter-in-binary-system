void opp(int arr[], int size) {
    // 先求反码
    for (int i = 0; i < size; i++) {//数组遍历
        arr[i] = arr[i] == 0 ? 1 : 0;//三目运算符，相当于if，真则结果1，假则结果2
    }
    // 再加 1
    int carry = 1;
    for (int i = size - 1; i >= 0; i--) {//逐位加一
        int sum = arr[i] + carry;
        arr[i] = sum % 2;
        carry = sum / 2;
        if (carry == 0) {
            break;
        }
    }
}
void pa(int arr[], int size)    //打印arr
{
    if (arr[0] == 1) {
        opp(arr, size);
        arr[0] = 1;//负数用原码表示
    }
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

/*int main() {
    int binaryArray[] = { 0,1,0,1 };
    int size = sizeof(binaryArray) / sizeof(binaryArray[0]);
    printf("原二进制数：");
    printArray(binaryArray, size);
    opp (binaryArray, size);
    printf("补码：");
    pa(binaryArray, size);
    return 0;
}*/