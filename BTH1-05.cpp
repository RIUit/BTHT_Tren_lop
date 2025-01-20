/*Đếm chữ số lẻ của số nguyên dương n do người dùng 
nhập từ bàn phím.*/            //123
#include <iostream>
using namespace std;


int main() {
	int n;
	int dem=0;
	//Nhap vao so nguyen duong
	do {
		cout << "Nhap so nguyen duong n : ";
			cin >> n;       //123
			if (n <= 0)
				cout << "Nhap sai gia  tri n (n la so nguyen duong )\n";
	} while (n <= 0);

	//Buoc lam
	int tam = n;
	while (tam > 0) {            //                123>0            12
		int chuso = tam % 10;   //tim chu so cuoi  3       2         1
		if (chuso % 2 != 0) {  //                  3/2!=0  2/2==0    1/2!=0
			dem++;            //                   dem=1   bo qua    dem=2 
		}
		tam /= 10;          //                     123/10=12        12/10=1
	}
	cout << "So " << n << " co " << dem << " chu so le" << endl;


	system("pause");
	return 0;
}