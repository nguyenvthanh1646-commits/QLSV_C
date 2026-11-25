#include <stdio.h>
#include "sinhvien.h"

int main() {
    SinhVien ds[100];
    int n = 0, chon;
    do {
        printf("\n==============================\n");
        printf("||   QUAN LY SINH VIEN C    ||\n");
        printf("==============================\n");
        printf("||  1. Nhap sinh vien       ||\n");
        printf("||  2. Hien thi sinh vien   ||\n");
        printf("||  3. Tinh diem trung binh ||\n");
        printf("||  4. Xep loai             ||\n");
        printf("||  5. Thoat                ||\n");
        printf("==============================\n");
        printf("Chon: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: nhapSV(ds, &n); break;
            case 2: hienThiSV(ds, n); break;
            case 3: tinhDTB(ds, n); break;
            case 4: xepLoai(ds, n); break;
            case 5: printf("Thoat chuong trinh\n"); break;
            default: printf("Lua chon khong hop le\n");
        }
    } while (chon != 5);
    return 0;
}
