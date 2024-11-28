#include <stdio.h>
#include <stdbool.h>

// Ham kiem tra so nguyen
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    
    int count = 0; // so luong nguyen tu da tim duoc
    int num = 2; // so hien tai de kiem tra
    
    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    
    return 0;
}

