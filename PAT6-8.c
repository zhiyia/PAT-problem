#include <stdio.h>

int Factorial(const int N);

int main()
{
	int N, NF;

	scanf_s("%d", &N);
	NF = Factorial(N);
	if (NF)  printf("%d! = %d\n", N, NF);
	else printf("Invalid input\n");

	return 0;
}


int Factorial(const int N) {
	int i,factorial;
	if (N >= 0&&N<=12) {
		factorial = 1;
		for (i = 1; i <= N; i++) {
			factorial = i * factorial;
		}
		return factorial;
	}
	return 0;
}