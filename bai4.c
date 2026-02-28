/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, m;

    // 1. Nhập số hàng n và số cột m
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("Kich thuoc ma tran khong hop le!\n");
        return 0;
    }

    int a[n][m];

    // 2. Nhập các phần tử của ma trận
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Tính bình phương và xuất ma trận kết quả
    printf("\nMa tran sau khi binh phuong cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Tinh binh phuong: a[i][j] * a[i][j]
            int binhPhuong = a[i][j] * a[i][j];
            printf("%d\t", binhPhuong); // \t de tao khoang cach tab deu nhau
        }
        printf("\n"); // Xuong dong sau khi in xong mot hang
    }

    return 0;
}