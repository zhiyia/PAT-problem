#include<stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	int flag = 0;
	//y元f分，给成了f元y分，用了n分,余额还剩2y元2f分。
	//2y*100+2f + n = f*100 +y
	//题目隐含的意思，n<100.f>y且
	//if y<n 100+y-n = f;
	//else y>n y-n = f
	// 求的是y,f.
	int y, f;
	//n = f * 100 + y - 2 * y * 100 - 2 * f;
	//n = y + 100 - 2*f;
	//整理
	//n = 98 * f - 199 * y;
	//n = y + 100 - 2 * f;
	//200 * y + 100 = 100*f;即2y +100 = f;
	// n = y+100 - 2*(y+1)
	for (f = 0; f < 100; f++) {
		for (y = 0; y < 100; y++) {
			if (98 * f - 199 * y == n) {
				printf("%d.%d", y, f);
				flag = 1;
				break;
			}
		}
	}
	if (!flag) {
		printf("No Solution");
	}
	return 0;
}