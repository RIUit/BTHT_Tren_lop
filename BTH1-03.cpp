/* kiểm tra một số nguyên dương x có 
phải là số hoàn thiện hay không. Biết rằng, x là số hoàn 
thiện khi có tổng các ước số ngoại trừ x cũng bằng chính nó. 
Ví dụ: 6 = 1 + 2 + 3*/
#include <iostream>
using namespace std;


int tinhUoc(int& x) {
	int tongUoc = 0;
	for (int i = 1; i < x; i++) {
		if (x % i == 0) {
			tongUoc = tongUoc + i;
		}
	}return tongUoc;
}
void nhapVao(int& n) {
	do {
		cout << "Nhap so nguyen duong x : "; cin >> n;
		if (n <= 0)
			cout << "Nhap sai gia tri cua x (x phai la so nguyen duong)\n";
	} while (n <= 0);
	return;
}
int main() {
	int a;

	nhapVao(a);//nhap vao so nguyen

	int tong=tinhUoc(a);//tinh tong uoc tru so chinh no
	if (tong == a)     //tong uoc = x thi la so hoan thien
		cout << a << " La so hoan thien \n";
	else
		cout << a << " khong la so hoan thien \n";

	system("pause");
	return 1;
}