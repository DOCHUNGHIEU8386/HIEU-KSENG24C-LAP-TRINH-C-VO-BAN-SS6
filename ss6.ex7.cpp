#include <stdio.h>

int main() {
    int num;

    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);

    printf("C�c u?c c?a %d l�:\n", num);
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

