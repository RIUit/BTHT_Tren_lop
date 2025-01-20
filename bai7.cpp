/*Viết chương trình nhập vào 3 cạnh của 1 tam giác và
xuất ra màn hình cho biết tam giác đó là tam giác gì?*/
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Nhap vao ba canh cua tam giac\n";
	cout << "Nhap a =";
	cin >> a;
	cout << "Nhap b =";
	cin >> b;
	cout << "Nhap c =";
	cin >> c;
	
	 if (a == b || a == c || c == b) {
		cout << "Day la tam giac can \n";
	}
	else if ((a == b) && (b == c)) {
		cout << "Day la tam giac deu \n";
	}
	else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a) {
		cout << "Day la tam giac vuong \n";
	}
	else if (a == b || a == c || c == b && a * a == b * b + c * c) {
		cout << "Day la tam giac vuong can \n";
	}
	else if (a + b > c || a + c > b || c + b > a) {
		 cout << "Day la tam giac thuong!\n";
	 }
	else
		cout << "Khong phai la tam giac\n";
	system("pause");
	return 0;
}