/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n;

    // 1. Nhập số lượng phần tử
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

    // 3. Thuật toán sắp xếp giảm dần (Interchange Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu phần tử đứng sau lớn hơn phần tử đứng trước
            if (a[j] > a[i]) {
                // Thực hiện hoán đổi (Swap)
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 4. Xuất mảng sau khi sắp xếp
    printf("\nMang sau khi sap xep giam dan: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}