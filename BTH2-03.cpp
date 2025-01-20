//yêu cầu nhập tên,số ngày làm việc và tiền công một ngày in ra tên và tiền lương nhận đc
#include <iostream>
#include <string>
using namespace std;

//input ten,so ngay lam viec, tien cong mot ngay
int main() {
	string name;
	int daylv, tiencong;
	cout << "Nhap ten ban : \n";
	getline(cin, name);
	cout << "Nhap so ngay lam viec : \n";
	cin >> daylv;
	cout << "Nhap tien cong mot ngay : \n";
	cin >> tiencong;

	int tienluong = daylv * tiencong;

	cout << name << " tien luong cua ban nhan duoc la : " << tienluong << endl;
	system("pause");
	return 0;
}