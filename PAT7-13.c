#include<stdio.h>
//找来找去发现一个单词打错了。。。。。无话可说
int main() {
	float Open, Close, High, Low;
	int flag = 0;
	scanf_s("%f %f %f %f", &Open, &High, &Low, &Close);
	if (Open>Close) {
		printf("BW-Solid");
	}
	else if (Open<Close) {
		printf("R-Hollow");
	}
	else{
		printf("R-Cross");
	}
	if (Low<Close&&Low<Open) {
		flag =flag+ 1;
	}
	if (High>Open&&High>Close) {
		flag =flag+ 2;
	}
	if (flag == 3) {
		printf(" with Lower Shadow and Upper Shadow");
	}
	else if (flag == 1) {
		printf(" with Lower Shadow");
	}
	else if (flag == 2) {
		printf(" with Upper Shadow");
	}
	return 0;
}