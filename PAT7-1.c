#include<stdio.h>

void CmToInchFoot(int n);


int main() {
	int n;
	scanf_s("%d",&n);
	CmToInchFoot(n);
	return 0;
}



 void CmToInchFoot(int n) {
	int i, j;

	i = n / 30.48;
	j = (n / 30.48 - i) * 12;
	printf("%d %d", i, j);
}

