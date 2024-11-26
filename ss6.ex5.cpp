#include <stdio.h>

// H�m ki?m tra nam nhu?n
int LeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Nam nhu?n
    }
    return 0; // Kh�ng ph?i nam nhu?n
}

int main() {
    int year, month, days;

    // Y�u c?u ngu?i d�ng nh?p v�o s? nam v� s? th�ng
    printf("Nh?p v�o nam: ");
    scanf("%d", &year);
    printf("Nh?p v�o th�ng: ");
    scanf("%d", &month);

    // Ki?m tra s? ng�y trong th�ng
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (LeapYear(year)) {
                days = 29; // Th�ng 2 nam nhu?n
            } else {
                days = 28; // Th�ng 2 kh�ng ph?i nam nhu?n
            }
            break;
        default:
            printf("Th�ng kh�ng h?p l?. Vui l�ng nh?p t? 1 d?n 12.\n");
            return 1;
    }

    // In ra s? ng�y trong th�ng v� nam d� nh?p
    printf("Th�ng %d nam %d c� %d ng�y.\n", month, year, days);

    return 0;
}

