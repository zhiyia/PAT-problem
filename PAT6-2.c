#include <stdio.h>

#define MAXN 10

double f(int n, double a[], double x);

int main()
{
	int n, i;
	double a[MAXN], x;

	scanf_s("%d %lf", &n, &x);
	for (i = 0; i <= n; i++)
		scanf_s("%lf", &a[i]);
	printf("%.1f\n", f(n, a, x));
	return 0;
}

double f(int n, double a[], double x) {
	int i;
	double y,m;
	y = 0;
	m = 1;
	for (i = 0; i <= n; i++) {
		y += a[i]*m;
		m = m * x;
	}
	return y;
}