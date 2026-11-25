#include <stdio.h>
#include "sinhvien.h"

void nhapSV(SinhVien ds[], int *n) {
    printf("Nhap so sinh vien: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("--- Sinh vien %d ---\n", i + 1);
        printf("Ma SV: ");     scanf("%s", ds[i].ma);
        printf("Ho ten: ");    scanf(" %[^\n]", ds[i].ten);
        printf("Diem Toan: "); scanf("%f", &ds[i].toan);
        printf("Diem Ly: ");   scanf("%f", &ds[i].ly);
        printf("Diem Hoa: ");  scanf("%f", &ds[i].hoa);
        ds[i].dtb = 0;
    }
}

void hienThiSV(SinhVien ds[], int n) {
    printf("%-8s %-20s %5s %5s %5s\n", "Ma", "Ho ten", "Toan", "Ly", "Hoa");
    for (int i = 0; i < n; i++)
        printf("%-8s %-20s %5.1f %5.1f %5.1f\n",
               ds[i].ma, ds[i].ten, ds[i].toan, ds[i].ly, ds[i].hoa);
}

void tinhDTB(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        ds[i].dtb = (ds[i].toan + ds[i].ly + ds[i].hoa) / 3;
        printf("%-20s DTB = %.2f\n", ds[i].ten, ds[i].dtb);
    }
}

void xepLoai(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        float d = (ds[i].toan + ds[i].ly + ds[i].hoa) / 3;
        printf("%-20s DTB = %.2f -> ", ds[i].ten, d);
        if (d >= 8)        printf("Gioi\n");
        else if (d >= 6.5) printf("Kha\n");
        else if (d >= 5)   printf("Trung binh\n");
        else               printf("Yeu\n");
    }
}
