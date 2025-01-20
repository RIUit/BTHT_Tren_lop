/*Một cửa hàng bán đồ gỗ tính giá bán của mỗi mặt hàng bằng giá mua vào cộng
thêm 60%. Viết chương trình yêu cầu nhập vào giá mua của một mặt hàng, sau đó
in ra giá bán của mặt hàng đó*/
#include <iostream>
using namespace std;

int main() {
	int n;
	//NHAP VAO GIA MUA
	do {
		cout << "Nhap gia mua cua mot mat hang : \n";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai gia mua,nhap lai \n";
	} while (n <= 0);
	
	//PRROCESSING
	double giaban = n + 0.6*n;

	//XUAT GIA BAN
	cout << "Gia ban cua mat hang la : " << giaban << endl;

	system("pause");
	return 1;
}

