#include<stdio.h>

int main() {
	int a,i,j,k,count;
	scanf_s("%d", &a);

	count = 0;
	for (i = a; i < a+4; i++) {
		for (j = a ; j < a+4; j++) {
			for (k = a; k < a+4; k++) {
				if (i == j || j == k|| i == k) {
					continue;
				}
				count++;
				printf("%d",i*100+j*10+k);
				if (count % 6 == 0) {
					printf("\n");
				}
				else {
					printf(" ");
				}
			}
		}
	}
	return 0;
}