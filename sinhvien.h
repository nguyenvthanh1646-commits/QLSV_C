#ifndef SINHVIEN_H
#define SINHVIEN_H

typedef struct {
    char ma[10];
    char ten[50];
    float toan, ly, hoa, dtb;
} SinhVien;

void nhapSV(SinhVien ds[], int *n);
void hienThiSV(SinhVien ds[], int n);
void tinhDTB(SinhVien ds[], int n);
void xepLoai(SinhVien ds[], int n);

#endif
