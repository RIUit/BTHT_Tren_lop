//Yeu cau nhap vao ban kính tính và in ra diện tích,chu vi của hình tròn
#include <iostream>
using namespace std;

int main() {
	//input
	double r, dientich, chuvi;
	const double PI = 3.141593;

	do {
		cout << "Nhap ban kinh cua duongg tron: \n"; cin >> r;
		if (r <= 0)
			cout << "Nhap so khong hop le \n";
	} while (r <= 0);

	dientich = PI * pow(r, 2);
	chuvi = 2 * PI * r;

	//output
	cout << "Hinh tron co dien tich : " << dientich << " va co chu vi : " << chuvi << endl;

	system("pause");
	return 0;
}