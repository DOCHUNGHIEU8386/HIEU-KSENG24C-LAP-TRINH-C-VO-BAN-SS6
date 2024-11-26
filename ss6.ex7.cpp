#include <stdio.h>

int main() {
    int num;

    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);

    printf("Các u?c c?a %d là:\n", num);
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

