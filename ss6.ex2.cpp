#include <stdio.h>

int main () {
	int numbers[5];
	int evenvariable = 0;
	int oddvariable = 0;
	
printf("Nhap vao 5 so nguyen:\n");
for (int i = 0; i < 5; i++) {
printf ("So thu %d: ", i + 1);
scanf("%d", &numbers[i]);
}

for (int i = 0; i < 5; i++) {
	if  (numbers[i] % 2 ==0) {
		evenvariable++;
	}
	else {
		oddvariable++;
}
}
printf("So luong so le la: %d\n", oddvariable);
printf("So luong so chan la : %d\n", evenvariable);

return 0;
}
