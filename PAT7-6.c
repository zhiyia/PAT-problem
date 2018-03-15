#include<stdio.h>

void PrintMix(float f,int i,char c,float fl);
int main() {
	float f, fl;
	int i;
	char c;
	scanf_s("%f", &f);
	scanf_s("%d", &i);
	scanf_s(" %c", &c);
	scanf_s("%f", &fl);
	PrintMix(f, i, c, fl);
	return 0;
}

void PrintMix(float f, int i, char c, float fl) {

	printf("%c %d %.2f %.2f",c,i,f,fl);
}