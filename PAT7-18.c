#include<stdio.h>
//题目保证多项式在给定区间存在唯一单根
//即ab必然异号，不做判断
double a3, a2, a1, a0;
double fx(double x);
int main() {
	double a, b, mid;
	scanf_s("%lf %lf %lf %lf", &a3, &a2, &a1, &a0);
	scanf_s("%lf %lf", &a, &b);
	mid = (a + b) / 2;
	while (fx(a)*fx(b)<=0 && a<=b-0.001) {
		if (fx(a) == 0)
		{
			printf("%.2f", a);
			return 0;
		}
		if (fx(b) == 0)
		{
			printf("%.2f", b);
			return 0;
		}
		mid = (a + b) / 2;
		if (fx(mid) * fx(a) > 0)
		{
			a = mid;
		}
		else
		{
			b = mid;
		}
	}
	printf("%.2f", mid);
	return 0;
}

double fx(double x) {
	return a3 * x*x*x + a2 * x*x + a1 * x + a0;
}