#include <iostream>
#include <string.h>
using namespace std;
int main() {
	setlocale(0, "");
	int a, n, b, k;
	cout << "������ ����� \n";
	cin >> n;
	a = n;
	b = 0;
	n = abs(n);
	while (n != 0) {
		k = n % 10;
		n = n / 10;
		b = b * 10 + k;
	}
	if (a == b)
		cout << "��������" << endl; 
	else cout << "�� ��������" << endl;
	return 0;
}