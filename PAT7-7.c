#include<stdio.h>

void TimePlan(int m,int n);

int main() {
	int m,n;
	scanf_s("%d:%d", &m, &n);
	TimePlan(m, n);
	return 0;
}

void TimePlan(int m,int n) {
	if (m >= 12&&m<24) {
		m = m - 12;
		if (m == 0) {
			m = 12;
		}
		printf("%d:%d PM", m, n);
	}
	else if(m < 12||m==24) {
		if (m == 24) {
			m = 0;
		}
		printf("%d:%d AM", m, n);
	}

}