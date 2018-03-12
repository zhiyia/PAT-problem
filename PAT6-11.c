#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
	ElementType A[MAXN];
	int N, i;

	scanf_s("%d", &N);
	for (i = 0; i<N; i++)
		scanf_s("%f", &A[i]);
	printf("%.2f\n", Median(A, N));

	return 0;
}

//第一反应冒泡排序再取中值
ElementType Median(ElementType A[], int N) {
	int i,j,x;
	ElementType temp;
	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			if (A[i] < A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	x = N / 2;
	return A[x];
}