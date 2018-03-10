#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
	int n1, n2, i, cnt;

	scanf_s("%d %d", &n1, &n2);
	cnt = 0;
	for (i = n1; i <= n2; i++) {
		if (IsTheNumber(i))
			cnt++;
	}
	printf("cnt = %d\n", cnt);

	return 0;
}

int IsTheNumber(const int N) {
	int i, x;
	x = N;
	if (sqrt(x)==(int)sqrt(x)) {
		int a[10] = { 0 };
		while (x) {
			for (i = 0; i < 10; i++) {
				if (x % 10 == i) {
					a[i] += 1;
					if (a[i] == 2) {
						return 1;
					}
				}
			}
			x = x / 10;
		}
		return 0;
	}
	return 0;
}