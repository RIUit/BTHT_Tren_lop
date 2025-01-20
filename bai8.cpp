/*Viết chương trình nhập vào tháng, năm và cho biết
tháng đó có bao nhiêu ngày.*/
#include <iostream>
using namespace std;

int main() {
	int thang, nam;

	cout << "Nhap vao thang: \n";
	cin >> thang;
	cout << "Nhap vao nam: \n";
	cin >> nam;
	switch (thang)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		cout << "So ngay cua thang co: 31 ngay\n";
		break;
	case 4:case 6:case 9:case 11:
		cout << "So ngay cua thang co:30 ngay\n";
		break;
	case 2:
		if (nam / 400 || nam / 4 && nam / 100)
			cout << "Thang co 29 ngay!\n";
		else
			cout << "Thang co 28 ngay!\n";
		break;
	default:
		break;
	}
	return 1;

}