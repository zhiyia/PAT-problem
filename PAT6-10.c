#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
	int N;

	scanf_s("%d", &N);
	Print_Factorial(N);
	return 0;
}

//1000的阶乘真的是太大了。。。需要用数组来存储，然后模拟运算过程。。。不然只会得到0
//思路一定要清晰。。
void Print_Factorial(const int N) {
	int i,j,upper,asize,factorial;
	int a[10000];
	a[0] = 1;
	upper = 0;
	asize = 1;
	if (N >= 0 && N <= 1000) {
		for (i = 2; i <= N; i++) {
			for (j = 0; j < asize; j++) {
				factorial = a[j] * i + upper;
				a[j] = factorial % 10;
				upper = factorial / 10;
			}
			while (upper) {
				a[asize] = upper%10;
				asize++;
				upper = upper/10;
			}
		}
		for (i = asize; i >=1; i--) {
			printf("%d", a[i-1]);
		}
	}
	else {
		printf("Invalid input");
	}
	
}