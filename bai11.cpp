﻿/*Viết chương trình nhận vào số nguyên n viết chương 
trình in ra màn hình hình vuông rỗng ruột dưới dạng các dấu 
*:*/
#include <iostream>
using namespace std;

int main() {
	int n = 0, s = 0;
	cout << "Nhap so nguyen n:\n"; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j += 1)
		{
			if (j<i )
				cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}