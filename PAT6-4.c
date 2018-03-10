#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average(ElementType S[], int N);

int main()
{
	ElementType S[MAXN];
	int N, i;

	scanf_s("%d", &N);
	for (i = 0; i<N; i++)
		scanf_s("%f", &S[i]);
	printf("%.2f\n", Average(S, N));

	return 0;
}


ElementType Average(ElementType S[], int N) {
	int i;
	double ave, sum;

	sum = 0;
	for (i = 0; i < N; i++) {
		sum += S[i];
	}

	ave = sum/N;
	return ave;
}