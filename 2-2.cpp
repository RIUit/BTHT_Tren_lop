//yeu cau nhap vao hai canh hinh chu nhat va in ra dien tich
#include <iostream>
using namespace std;

int main() {
	// input hai canh hinh chu nhat
	int a, b, dientich;
	cout << "Nhap canh a : \n";
	cin >> a;
	cout << "Nhap canh b : \n";
	cin >> b;
	if (a, b > 0) {
		dientich = a * b;
		cout << "Dien tich hinh chu nhat :  " << dientich << endl;
	}
	else
		cout << "Nhap sai gia tri \n";
	system("pause");
	return 0;
}