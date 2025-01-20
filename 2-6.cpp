/*Viết chương trình yêu cầu nhập vào một số nguyên dương gồm 3 chữ số, sau đó in
ra tổng của 3 chữ số và số đảo ngược*/
#include <iostream>
using namespace std;

int main() {

	int n, tong = 0, tam, chuso, daonguoc = 0;
	//Input nhap so nguyen duong 3 chu so
	do {
		cout << "Nhap so nguyen duong  : \n";
		cin >> n;
		if (n <= 0)
			cout << "Nhâp sai so nguyen duong n, nhap lai ! \n";
	} while (n <= 0);

	//Processing

		//Tong 3 chu so

	tam = n;

	while (tam > 0) {
		chuso = tam % 10;
		tong += chuso;

		//so dao nguoc
		daonguoc = daonguoc * 10 + chuso;
		tam /= 10;


		//out tong va so dao nguoc
		cout << "Tong 3 chu so cua so " << n << " la : " << tong << endl;

		cout << "So dao nguoc cua so " << n << " la : " << daonguoc << endl;
	}
	system("pause");
	return 1;
}