#include<stdio.h>

int main() {
	int a, b, c;
	scanf_s("%d %d %d",&a,&b,&c);

	if (a == b) {
		printf("C");
	}
	else if(a == c){
		printf("B");
	}
	else {
		printf("A");
	}
	return 0;
}