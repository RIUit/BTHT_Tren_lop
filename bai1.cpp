//Tính S = x1 + x2 + … + xn
#include <iostream>
using namespace std;

int main() {
    int x, n;
    int tong = 0;

    do {
        cout << "Nhap vao gia tri cua x: \n";
        cin >> x;

        if (x <= 0)
            cout << "Nhap sai gia tri cua x roi,nhap lai!\n";

    } while (x <= 0);

    cout << "Nhap vao gia tri cua mu n:\n";
    cin >> n;

    if (n > 0) {

        for (int i = 1; i <= n; i++)
            tong += pow(x, i);
        cout << "Tong cac so la: \n" << tong << endl;

    }
    else
        cout << "Nhap sai gia tri cua mu n roi!\n";

    system("pause");
    return 0;
}