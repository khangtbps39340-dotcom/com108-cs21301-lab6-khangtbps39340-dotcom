/******************************************************************************
 * Họ và tên: Trần Bảo Khang
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>

int main() {

    int n, i;
    int a[100];
    int tong = 0;
    int dem = 0;
    float tb;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i] % 3 == 0){
            tong = tong + a[i];
            dem++;
        }
    }

    tb = (float)tong / dem;

    printf("TB = %.2f", tb);

    return 0;
}

