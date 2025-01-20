/*Ki?m tra m?t s? có ph?i là s? ??i x?ng hay không? Ví 
d?: 212 là s? ??i x?ng.*/
#include <iostream>
using namespace std;


int main() {
	int n;
	do {
		cout << "Nhap so nguyen can so sanh : ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai gia tri cua n (n la so nguyen duong )\n";
	} while (n <= 0);
	int tam=n,sdn=0;
	while (tam != 0) {
		sdn = sdn * 10 + tam % 10;
		tam /= 10;
	}
	if (sdn == n)
		cout << n << " la so doi xung " << endl;
	else
		cout << n << " khong la so doi xung" << endl;

	system("pause");
	return 1;

}