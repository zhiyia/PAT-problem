#include<stdio.h>
//40以下为正常工资
//超过40的为1.5倍
//5年分新老员工
//新的30元/小时
//老的50元/小时
int main() {
	int year, worktime;
	float salary;
	scanf_s("%d %d", &year, &worktime);

	if (year >= 5) {
		if (worktime > 40) {
			salary = 40 * 50 + (worktime - 40) * 50 * 1.5;
		}
		else {
			salary = worktime * 50;
		}
	}
	else {
		if (worktime > 40) {
			salary = 40 * 30 + (worktime - 40) * 30 * 1.5;
		}
		else {
			salary = 30 * worktime;
		}
	}

	printf("%.2f", salary);
	return 0;
}