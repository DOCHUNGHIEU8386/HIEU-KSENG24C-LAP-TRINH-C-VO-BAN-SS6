#include <stdio.h>
#include <string.h>

int main() {
    char Password[] = "1102"; 
    char inputPassword[20];         
    
    printf("Nh?p vào m?t kh?u: ");
    scanf("%s", inputPassword);

    
    if (strcmp(Password, inputPassword) == 0) {
	
        printf("Mat khau dung!\n");
    }
	 else {
        printf("Mat khau sai!\n");
    }

    return 0;
}

