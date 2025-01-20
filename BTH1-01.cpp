//Tính S = x1 + x2 + … + xn
#include<iostream>
#include<cmath>
using namespace std ;

int main() {
	double tong = 0,n,x;

	//INPUT X VA N
	do {
		cout << "Nhap gia tri cua x : \n";
		cin >> x;
		cout << "Nhap so mu n : \n";
		cin >> n;
		if (x && n < 0)
			cout << "Ngoai vung cho phep \n";
	} while (x && n < 0);
	//PROCESSING
	for (int i = 1;i<=n; i++) {
		tong += pow(x, n);
	}

	// OUTPUT TONG
	cout << "Tong cac so la : " << tong << endl;

	system("pause");
	return 1;
}
