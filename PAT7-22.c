#include<stdio.h>

int main() {

	int time;
	scanf_s("%d", &time);
	int wl, tl;
	wl = 30;
	tl = 90;
	int i = 10;
	if (time <= 10) {
		wl = time * 3;
		tl = time * 9;
	}
	while (time>i) {
		if (time - i >= 30) {
			if (tl > wl) {
				wl += 90;
				i += 30;
			}
			else {
				tl += 90;
				wl += 30;
				i += 10;
			}
		}
		else if (time-i>=10) {
			if (tl > wl) {
				wl += (time - i) * 3;
				i = time;
			}
			else {
				wl += 30;
				tl += 90;
				i += 10;
			}
		}
		else {
			if (tl > wl) {
				wl += (time - i) * 3;
				i = time;
			}else {
				wl += (time - i) * 3;
				tl += (time - i) * 9;
				i = time;
			}
		}
	}
	if (wl > tl) {
		printf("@_@ %d", wl);
	}
	else if (tl > wl) {
		printf("^_^ %d", tl);
	}
	else {
		printf("-_- %d", wl);
	}
	return 0;
}