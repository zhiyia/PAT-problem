#include<stdio.h>
//vs2017强制要求scanf_s，
//scanf_s("%d  %c %d", &x, &c, &y);会出错
//去看了看，_s为了防止越界，需要有个边界大小
int main() {
	int x, y;
	char c;
	scanf_s("%d  %c %d", &x, &c,1, &y);
	if (c=='+') {
		printf("%d",x+y);
	}
	else if (c == '-') {
		printf("%d", x - y);
	}
	else if (c == '*') {
		printf("%d",x*y);
	}
	else if (c == '/') {
		printf("%d", x / y);
	}
	else if (c == '%') {
		printf("%d", x % y);
	}
	else {
		printf("ERROR");
	}
	return 0;
}