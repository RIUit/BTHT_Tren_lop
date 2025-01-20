//Bai 4 bai thuc hanh 1
#include <iostream>
#include <cmath>
using namespace std;


void nhapVao(double& x) {
	do {
		cout << "Nhap so n : "; cin >> x;
		if (x <= 0)
			cout << "Nhap sai gia tri n (n nam trong can phai lon hon 0)\n";
	} while (x <= 0);
	return;
}

int main() {
	double tong = 0,n;

	nhapVao(n);//nhap so nguyen 2

	for (int i = 1; i <= n; i++) {  //1<2    2<=2
		tong = sqrt(tong + n);     // i=1:can(0+2) i=2:can(can(2)+2)=tong
		
	}
	cout << "Tong bieu thuc la : " << tong << endl;

	system("pause");
	return 1;
}