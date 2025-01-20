/*Viết chương trình nhận vào chiều cao h của một hình
tam giác (h > 0). Xuất ra màn hình tam giác có chiều cao h
dưới dạng các dấu ccccc*.*/
#include <iostream>
using namespace std;

int main() {
	int n = 0, s = 0;
	cout << "Nhap so nguyen n:\n"; cin >> n;
	for (int i = n; i>=1; i--) {
		for (int j = 1; j <= i; j++) {
			if (j<=i)
				cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}