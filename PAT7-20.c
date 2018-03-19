#include<stdio.h>

int main() {
	int i, j;
	int n;
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%-4d", j, i, i*j);
			if (i == j) {
				printf("\n");
			}
		}
	}
	return 0;
}