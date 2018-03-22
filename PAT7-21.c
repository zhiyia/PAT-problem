#include<stdio.h>

int main() {
	int n;
	int flag = 0;
	scanf_s("%d", &n);
	for (int x = 1; x < 100; x++) {
		for (int y = 100; y>=x; y--) {
			if (x*x + y * y == n) {
				printf("%d %d\n",x,y);
				flag = 1;
			}
		}
	}
	if (!flag) {
		printf("No Solution");
	}
	return 0;
}