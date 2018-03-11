#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
	int N, D;

	scanf_s("%d %d", &N, &D);
	printf("%d\n", Count_Digit(N, D));
	return 0;
}


int Count_Digit(const int N, const int D) {
	int x,count;
	x = N;
	count = 0;
	if (N < 0) {
		x = -N;
	}
	else if (N == 0) {
		count = 1;
	}
	while (x) {
		if (D == (x % 10)) {
			count++;
		}
		x= x / 10;
	}
	return count;
}