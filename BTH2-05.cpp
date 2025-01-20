//yeu cau nhap vao 3 canh a b c cua tam giac
//tinh in ra dien tich tam giac     p=(a+b+c)/2  S=sqrt(p(p-a)(p-b)(p-c))
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	double p, dientich;

	do
	{
		cout << "Nhap canh a cua tam giac : \n";
		cin >> a;
		cout << "Nhap canh b cua tam giac : \n";
		cin >> b;
		cout << "Nhap canh c cua tam giac : \n";
		cin >> c;
		if (a <= 0 && b <= 0 && c <= 0)
			cout << "So khong hop le,nhap lai ! \n";
	} while (a <= 0 && b <= 0 && c <= 0);
	p = (a + b + c) / 2;
	dientich = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich cua tam giac : " << dientich << endl;

	system("pause");
	return 0;
}
