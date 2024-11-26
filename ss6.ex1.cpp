#include <stdio.h>

int main() {
	int numbers[5];
	int totaloddnumber = 0;
	// Nhap vao 5 so nguyen 
	printf("Nhap vao 5 so nguyen:\n");
for (int i = 0; i < 5; i++) {	
printf("So thu %d: ", i + 1);
		scanf("%d", &numbers[i]);
		}
	for (int i = 0; i < 5; i++) {
		if (numbers[i] % 2 != 0) {
			totaloddnumber += numbers[i];
			}
			}
			printf("Tong cac so le la: %d\n", totaloddnumber);
			
			
		




return 0;
}
