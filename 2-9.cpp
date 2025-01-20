/*Thuật giải sau đây mô tả cách tính tổng trị giá một đơn hàng của một cửa hàng bán
sách
      dựa trên tổng số tiền mua sách và tổng số sách mua:

         Đọc vào tổng số sách và tổng số tiền.
         Tính thuế (7.5% của tổng số tiền).
         Tính tiền vận chuyển (2000 đ/cuốn).

     Tổng trị giá đơn hàng = tổng tiền mua sách + tiền thuế + tiền vận chuyển.

     In ra tổng trị giá của đơn hàng*/
#include <iostream>
using namespace std;

int main() {
    int tienSach, soSach;
    //Nhap vao tong tien mua sach va so sach mua

    do {
        cout << "Nhap tong so tien mua sach : \n";
        cin >> tienSach;
        cout << "Nhap tong so sach mua : \n";
        cin >> soSach;
        if (tienSach && soSach <= 0)
            cout << "Nhap sai ,bao loi!!!!\n";
    } while (tienSach && soSach <= 0);

    //Processing

    double tong = tienSach + tienSach * (7.5 / 100) + soSach * 2000;

    //Xuat tong tri gia don hang

    cout << "Tong tri gia don hang cua ban la :" << tong << endl;


        system("pause");
        return 1;
}