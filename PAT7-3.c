#include<stdio.h>
//程序限制了正3位数。
int reverse(int n);

int main() {
	int rev;
	scanf_s("%d", &rev);
	printf("%d", reverse(rev));
	return 0;
}

int reverse(int n) {
	int z,x,y;
	z = n / 100;
	x = (n-(z*100))/10;
	y = n % (x * 10 + z * 100);
	return y * 100 + x * 10 + z;
}