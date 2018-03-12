#include <iostream>
using namespace std;

#define MAXLEN 50
typedef int KeyType;

typedef  struct
{
	KeyType  key;
} elementType;

typedef  struct
{
	elementType   data[MAXLEN + 1];
	int   len;
} SeqList;

void creat(SeqList &L)
{
	int i;
	cin >> L.len;
	for (i = 1; i <= L.len; i++)
		cin >> L.data[i].key;
}

int  binSearch(SeqList T, KeyType k);

int main()
{
	SeqList L;  KeyType k;
	creat(L);
	cin >> k;
	int pos = binSearch(L, k);
	if (pos == 0) cout << "NOT FOUND" << endl;
	else cout << pos << endl;
	return 0;
}

int binSearch(SeqList T, KeyType k) {
	int flag=0;
	for (int i = 1; i <= T.len; i++) {
		if (k == T.data[i].key) {
			flag = i;
		}
	}
	return flag;
}