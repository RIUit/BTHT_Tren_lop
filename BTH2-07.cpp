/*Khoảng cách d giữa hai điểm (x1,y1) và (x2,y2) được tính bằng công thức sau:
     d = can(  (x2-x1)^2  +  (y2-y1)^2  )
Viết chương trình nhập vào tọa độ hai điểm, tính và in ra khoảng cách giữa hai
điểm*/
#include<iostream>
using namespace std;

void toadodiem(double& x, double& y) {
    cout << "Nhap toa do diem : \n";
    cin >> x >> y;
    return;
}
double khoangcach(double& a, double& b) {
    cin >> a >> b;
}
int main() {

    double a1, b1, a2, b2;
    toadodiem(a1, b1);
    toadodiem(a2, b2);

    return 0;
}