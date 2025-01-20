/* Liệt kê tất cả các ước số lẻ của số nguyên dương n do
người dùng nhập từ bàn phím. */
#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Nhap so nguyen duong:\n ";
        cin >> n;

        if (n <= 0)
            cout << "Nhap sai so nguyen duong,nhap lai!\n";

    } while (n <= 0);

        for (int i = 1; i < n; i++) 
        {
            if (n / 2 != 0 && n % i == 0)
            cout << "So uoc le cua so nguyen " << n << "la:" << i << endl;
        }
    system("pause");
    return 1;
}
