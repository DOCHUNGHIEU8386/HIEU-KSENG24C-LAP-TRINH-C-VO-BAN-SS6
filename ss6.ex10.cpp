#include <stdio.h>
#include <stdbool.h>

// Hàm ki?m tra s? nguyên t?
bool kiemTraNguyenTo(int num) {
    if (num <= 1) {
        return false; // S? nh? hon ho?c b?ng 1 không ph?i là s? nguyên t?
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; // N?u tìm th?y u?c khác 1 và chính nó, không ph?i s? nguyên t?
        }
    }

    return true; // Không tìm th?y u?c khác, là s? nguyên t?
}

int main() {
    int num;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);

    // Ki?m tra và in k?t qu?
    if (kiemTraNguyenTo(num)) {
        printf("%d là s? nguyên t?.\n", num);
    } else {
        printf("%d không ph?i là s? nguyên t?.\n", num);
    }

    return 0;
}

