#include<iostream>
#include<math.h>
using namespace std;

int main() {
    double s = 0;
    int n;

    cout << "Nhap vao gia tri cua n la: ";
    cin >> n;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
            s = sqrt(s + n);
        cout << "Tong so cua gia tri n = " << n << "la" << s << endl;
    }
    else
        cout << "Nhap sai gia tri cua n roi!\n";
    system("pause");
    return 1;
}