/*Viết chương trình kiểm tra một số nguyên dương x có
phải là số hoàn thiện hay không. Biết rằng, x là số hoàn
thiện khi có tổng các ước số ngoại trừ x cũng bằng chính nó.*/
#include <iostream>
using namespace std;

int main() {
    int x;
    do {
        cout << "Nhap so nguyen duong x : \n ";
        cin >> x;
        if (x <= 0)
            cout << "Nhap sai so nguyen duong x roi!";
    } while (x <= 0);
    int s = 0;

        for (int i = 1; i <= x && x % i == 0 && x != i; i++)
            s += i;

        if (s = x)
            cout << "x =" << x << "la so hoan thien voi tong uoc la :" << s << endl;
        else
            cout << "x =" << x << "khong phai so hoan thien \n";
    system("pause");
    return 1;

}