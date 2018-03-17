#include<stdio.h>

int main() {
	int N, U, D, min,mile;
	scanf_s("%d %d %d", &N, &U, &D);
	mile = 0;
	min = 0;
	while (1) {
		min++;
		mile += U;
		if (mile >= N) {
			break;
		}
		min++;
		mile -= D;
	}
	printf("%d", min);
	return 0;
}