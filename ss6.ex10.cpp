#include <stdio.h>
#include <stdbool.h>

// H�m ki?m tra s? nguy�n t?
bool kiemTraNguyenTo(int num) {
    if (num <= 1) {
        return false; // S? nh? hon ho?c b?ng 1 kh�ng ph?i l� s? nguy�n t?
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; // N?u t�m th?y u?c kh�c 1 v� ch�nh n�, kh�ng ph?i s? nguy�n t?
        }
    }

    return true; // Kh�ng t�m th?y u?c kh�c, l� s? nguy�n t?
}

int main() {
    int num;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);

    // Ki?m tra v� in k?t qu?
    if (kiemTraNguyenTo(num)) {
        printf("%d l� s? nguy�n t?.\n", num);
    } else {
        printf("%d kh�ng ph?i l� s? nguy�n t?.\n", num);
    }

    return 0;
}

