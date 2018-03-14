#include<stdio.h>

void SpendTime(int m, int n);

int main() {
	int m, n;
	scanf_s("%d %d",&m,&n);
	SpendTime(m,n);
	return 0;
}

void SpendTime(int m, int n) {
	int min, sec, tim;
	min = n / 60;
	sec = n % 60;
	min = m / 100 + min;
	sec = m % 100 + sec;
	
	if (sec >= 60) {
		min = min + sec / 60;
		sec = sec % 60;
	}
	else if (sec <= 0) {
		min = min - 1;
		sec = 60 + sec;
	}
	if (min > 24) {
		min = min - 24;
	}
	else if (min <= 0) {
		min = min + 24;
	}
	tim = min * 100 + sec;
	printf("%d", tim);

}