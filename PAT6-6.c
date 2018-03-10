#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
	int Data; /* �洢������� */
	PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

int FactorialSum(List L);

int main()
{
	int N, i;
	List L, p;

	scanf_s("%d", &N);
	L = NULL;
	for (i = 0; i<N; i++) {
		p = (List)malloc(sizeof(struct Node));
		scanf_s("%d", &p->Data);
		p->Next = L;  L = p;
	}
	printf("%d\n", FactorialSum(L));
	return 0;
}

int FactorialSum(List L) {
	List p;
	int i,n,sum,factorial;
	sum = 0;
	p = L;
	while (p!=NULL) {
		n = p->Data;
		factorial = 1;
		for (i = 1; i <= n; i++) {
			factorial = i * factorial;
		}
		sum += factorial;
		p = p->Next;
	}
	return sum;
}