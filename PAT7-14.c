#include<stdio.h>

int main() {
	int a, b,i,count,sum;
	scanf_s("%d %d", &a, &b);
	count = -1;
	sum = 0;
	for (i = a; i <= b; i++) {
		count += 1;
		if (count % 5 == 0&&count>=5) {
			printf("\n");
		}
		printf("%5d",i);
		sum += i;

	}
	printf("\nSum = %d",sum);
	return 0;
}