/*Viết chương trình nhận vào chiều cao h của một hình
tam giác (h > 0). Xuất ra màn hình tam giác có chiều cao h
dưới dạng các dấu eeeeeeeeeee*/
#include <iostream>
using namespace std;

int main() {
	int n = 0, s = 0;
	cout << "Nhap so nguyen n:\n"; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1;j<=2*n-1; j++) {
			if (j>=n-i+1&&j<=n+i-1)
				cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}