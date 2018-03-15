#include<stdio.h>

int main() {
	float x;
	float price;
	scanf_s("%f", &x);
	if (x <= 15) {
		price = (4 * x) / 3;
	}
	else {
		price = (2.5*x) - 17.5;
	}
	printf("%.2f",price);
	return 0;
}