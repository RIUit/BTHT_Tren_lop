/*Có 3 loại tiền 1000 đồng, 2000 đồng và 5000 đồng. 
Viết chương trình tìm tất cả các phương án có thể để ghép 
các loại tiền này thành tổng cho trước. Ví dụ: 10000 = 
1x1000 + 2x2000 + 1x5000 (1 phương án)*/
#include <iostream>
using namespace std;

int main() {
	int hamuon,a = 0, b = 0, c = 0,s=0;
	do {
		cout << "Nhap so tien ban mo uoc :\n";
		cin >> hamuon;
		if (hamuon < 0)
			cout << "Nhap sai so tien !\n";
	} while (hamuon < 0);
	for (a=0; a <= hamuon/1000; a++) {
		for (b = 0; b <= hamuon/2000; b++)
		{
			for (c = 0; c <= hamuon / 5000; c++) 
			{
				if (a * 1000 + b * 2000 + c * 5000 == hamuon)
					s = a + b + c;
			}
		}
	}
	cout << "Tong cac phuong an la:" << s << endl;
	system("pause");
	return 0;

}