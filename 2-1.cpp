#include <iostream>
using namespace std;

//abs(a):giá trị tuyệt đối
//sqrt(a):căn bậc hai       trả về kiu double
//pow(a,b):a mũ b           trả về kiu dounle
//round(a): làm tròn lên    vd 2.5678=3

//Viet chuong trinh nhap vao canh hinh vuong va in ra dien tich va chu vi

int main() {
	int n, dientich, chuvi;
	cout << "Nhap canh hinh vuong\n";
	cin >> n;
	dientich = n * n;
	chuvi = n * 4;
	cout << "dien tich hinh vuong : " << dientich << " va chu vi hinh vuong :" << chuvi << endl;
	system("pause");
	return 0;
}