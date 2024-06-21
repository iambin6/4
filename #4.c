#include <stdio.h>

int main() {
    int income, n; // thu nhap va so nguoi phu thuoc
    float pa = 9000000; // so tien nuoi ban than
    float pd = 3600000; // tien cap duong cho moi nguoi phu thuoc
    float tf, ti; // thu nhap mien thue va thu nhap chiu thue
    float tax; // thue thu nhap

    printf("Nhap vao thu nhap hang nam cua ban: ");
    scanf("%d", &income);

    printf("Nhap so nguoi phu thuoc: ");
    scanf("%d", &n);

    // Tinh thu nhap mien thue
    tf = 12 * (pa + n * pd);
	
    // Tinh thu nhap chiu thue
    ti = income - tf;
    if (ti <= 0) {
        ti = 0;
    }

    // Tinh thue thu nhap
    if (ti <= 5000000) {
        tax = ti * 0.05;
    } else if (ti <= 10000000) {
        tax = 250000 + (ti - 5000000) * 0.10;
    } else if (ti <= 18000000) {
        tax = 750000 + (ti - 10000000) * 0.15;
    } else {
        tax = 1900000 + (ti - 18000000) * 0.20;
    }

    // Print out the results
    printf("Thu nhap: %d\n", income);
    printf("Thu nhap chiu thue: %.0f\n", ti);
    printf("Thue thu nhap: %.0f\n", tax);

    return 0;
}