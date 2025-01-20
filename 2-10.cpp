/*  Viết chương trình yêu cầu:
a) Nhập vào một ký tự, sau đó in ra mã ASCII của ký tự đó.
b) Nhập vào một số nguyên (1..255), sau đó in ra ký tự có mã ASCII tương ứng   */
#include <iostream>
using namespace std;

int main() {

    char kytu;
    int n;
    //Nhap vao 1 ky tu va 1 so nguyen

    cout << "Nhap vao mot ky tu \n";
    cin >> kytu;
    cout << "Nhap vao mot so nguyen \n";
    cin >> n;

   

    cout <<" Ma ASCII cua ky tu  "<< kytu <<" la "<< (int)(kytu) << endl;

    cout<<"Ma ASCII cua so nguyen  "<<n<< " la " << (char)(n) << endl;

    return 1;
  

}