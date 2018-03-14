#include<stdio.h>
//输入在[0,153]的正整数
//也就是说，第二位不会出现字母。最高是十六进制的99;
void ChangeBCD(int n);

int main() {
	int n;
	scanf_s("%d", &n);
	ChangeBCD(n);
	return 0;
}

void ChangeBCD(int n) {

	int x, y;
	x = n / 16;
	y = n % 16;
	printf("%d", x * 10 + y);
}