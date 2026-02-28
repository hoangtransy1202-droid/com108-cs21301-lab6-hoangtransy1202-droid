/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;
    
    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Mang khong hop le!\n");
        return 0;
    }

    int a[n];
    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    float tong = 0;
    int dem = 0;

    // Duyệt mảng để tìm các số chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            tong += a[i];
            dem++;
        }
    }

    // Xuất kết quả
    if (dem == 0) {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    } else {
        float trungBinh = tong / dem;
        // %.2f để định dạng lấy 2 chữ số sau dấu phẩy
        printf("Trung binh cac so chia het cho 3 la: %.2f\n", trungBinh);
    }

    return 0;
}
