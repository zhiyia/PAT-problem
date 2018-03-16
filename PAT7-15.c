#include<stdio.h>

int main() {
	double n, p,t,x,y;
	int i,count;
	scanf_s("%lf", &n);
	x = 1;
	y = 1;
	p = 1;
	count = 0;
	while(1){
		count++;
		if (count == 1) {
			t = 1;
			continue;
		}
		i = count;
		x = x * (i - 1);
		i = (count - 1) * 2 + 1;
		y = y * i;
		t = x / y;
		p += t;
		if (t < n) {
			break;
		}
	}
	printf("%.6f", p*2);
	return 0;
}