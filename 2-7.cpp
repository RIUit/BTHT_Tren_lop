/*Khoảng cách d giữa hai điểm (x1,y1) và (x2,y2) được tính bằng công thức sau:
     d = can(  (x2-x1)^2  +  (y2-y1)^2  )
Viết chương trình nhập vào tọa độ hai điểm, tính và in ra khoảng cách giữa hai
điểm*/
#include<iostream>
#include <cmath>
using namespace std;

/*void toadodiem(double& x, double& y) {
    cout << "Nhap toa do diem : \n";
    cin >> x>> y;
    return;
}*/
/*double kcach(double a, double b) {
    double d=0,a1,a2,b1,b2;
    d = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));
}*/
int main() {
    double a1, a2, b1, b2;

    //NHAP VAO

    cout << "Nhap toa do diem A : \n";
    cin >> a1 >> b1;
    cout << "Nhap toa do diem B : \n";
    cin >> a2 >> b2;

    //PROCESSING

    double d = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));

    //XUAT RA

    cout << "Khoang cach giua hai diem A va B la : " << d << endl;


    system("pause");
    return 0;
}