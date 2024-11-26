#include <stdio.h>

// Hàm ki?m tra nam nhu?n
int LeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Nam nhu?n
    }
    return 0; // Không ph?i nam nhu?n
}

int main() {
    int year, month, days;

    // Yêu c?u ngu?i dùng nh?p vào s? nam và s? tháng
    printf("Nh?p vào nam: ");
    scanf("%d", &year);
    printf("Nh?p vào tháng: ");
    scanf("%d", &month);

    // Ki?m tra s? ngày trong tháng
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (LeapYear(year)) {
                days = 29; // Tháng 2 nam nhu?n
            } else {
                days = 28; // Tháng 2 không ph?i nam nhu?n
            }
            break;
        default:
            printf("Tháng không h?p l?. Vui lòng nh?p t? 1 d?n 12.\n");
            return 1;
    }

    // In ra s? ngày trong tháng và nam dã nh?p
    printf("Tháng %d nam %d có %d ngày.\n", month, year, days);

    return 0;
}

