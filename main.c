#include <stdio.h>
#include <stdlib.h>

float tinhluong13(int namkinhnghiem, int namlamviec) {
    int luongchinhthuc;
    float thuongthang13;
    if (0 <= namkinhnghiem < 2) {
        luongchinhthuc = 10;
    } else if (2 <= namkinhnghiem <= 5) {
        luongchinhthuc = 20;
    } else if (namkinhnghiem > 5) {
        luongchinhthuc = 30;
    }

    if (0 <= namlamviec < 1) {
        thuongthang13 = 0.3 * luongchinhthuc;
    } else if (1 <= namlamviec <= 2) {
        thuongthang13 = 0.5 * luongchinhthuc;
    } else if (2 < namlamviec <= 5) {
        thuongthang13 = luongchinhthuc;
    } else if (namlamviec > 5) {
        thuongthang13 = 2 * luongchinhthuc;
    }
    return thuongthang13;
}

int main() {
    int namkinhnghiem, namconghien;
    printf("Nhap so nam kinh nghiem cua ban: ");
    scanf("%d", &namkinhnghiem);
    printf("Nhap so nam lam viec cho cong ty: ");
    scanf("%d", &namconghien);
    if (namkinhnghiem < 0 || namconghien < 0) {
        printf("nhap sai");
    } else {
        printf("luong thang 13 la: %.2f trieu\n", tinhluong13(namkinhnghiem, namconghien));
        printf("_____________________________________");
    }
    return 0;
}
