//Tính S = 1/x1 + 1/x2 + … + 1/xn
#include <iostream>
using namespace std;


void nhapVao(int &x, int &n) {
	cout << "Tong S=1/x1 + 1/x2 +....+1/n \n";
	do {
		;
		cout << "Nhap gia tri cua x : \n";
		cin >> x;
		cout << "Nhap vao so mu cua x  : \n";
		cin >> n;
		if (x && n < 0)
			cout << "Nhap gia tri cua x or gia tri mu nho hon khong,nhap lai\n";
	} while (x && n < 0);
}
int main() {
	double x,n, tong = 0.0;
	int a,b;
	//INPUT X VA SO MU
	nhapVao(a, b);
	
	//PROCESSING
	for (int i = 1; i <= b; i++) {
		tong += 1 / (pow(a, i));
	}
	
	//OUTPUT TONG GIA TRI CUA BIEU THUC
	
	cout << "Tong gia tri cua bieu thuc " << tong << endl;

	system("pause");
	return 1;
}