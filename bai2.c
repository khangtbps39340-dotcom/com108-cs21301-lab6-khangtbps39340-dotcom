/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main(){

    int n,i;
    int a[100];
    int max, min;

    printf("Nhap n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];

    for(i=0;i<n;i++){

        if(a[i] > max){
            max = a[i];
        }

        if(a[i] < min){
            min = a[i];
        }
    }

    printf("Max = %d\n",max);
    printf("Min = %d",min);

    return 0;
}
