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

int main() {
    int n;

    // 1. Nhập số lượng phần tử n
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Mang khong hop le!\n");
        return 0;
    }

    int a[n];
    // 2. Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // 3. Kỹ thuật lính canh: Gán giá trị đầu tiên làm mốc
    int max = a[0];
    int min = a[0];

    // Duyệt mảng từ phần tử thứ 2 (chỉ số 1) để so sánh
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; // Cập nhật Max mới
        }
        if (a[i] < min) {
            min = a[i]; // Cập nhật Min mới
        }
    }

    // 4. Xuất kết quả
    printf("---------------------------\n");
    printf("Gia tri lon nhat (Max): %d\n", max);
    printf("Gia tri nho nhat (Min): %d\n", min);

    return 0;
}