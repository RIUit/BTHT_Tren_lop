#include<iostream>
using namespace std;


void nhapDL(int& n) {
	do {
		cout << "Nhap vao so nguyen duong tuy tam : \n";
		cin >> n;
		if (n < 0)
			cout << "Nhap sai so nguyen duong,nhap lai di ! \n";
	} while (n < 0);
}
int main() {
	int n, chon;
	do {
		cout << "===============THUC DON IT ===============\n";
		cout << "========1.IN RA HINH VUONG *                =========\n";
		cout << "========2.TAO HINH VUONG RONG RUOT          =========\n";
		cout << "========3.TAO HINH TAM GIAC VUONG RONG RUOT =========\n";
		cout << "========4.TAO HINH TAM GIAC VUONG BEN TRAI  =========\n";
		cout << "========5.TAO HINH TAM GIAC VUONG DAO NGUOC =========\n";
		cout << "========THUC DON IT =========\n";
		cout << "========0.Thoat     =========\n";

		cout << "Nhap lua chon cua ban \n";
		cin >> chon;
		system("cls");
		
		switch (chon) {
		case 0:
			cout << "Cam on da dung phan men \n";
		case 1: {
			cout << "======1.TAO HINH VUONG =======\n";
			nhapDL(n);
			for (int i = 1; i <= n; i++) {
				
				for (int j = 1; j <= n; j++) {
					cout << "*";
				}
				cout << "\n";
			}
			cout << endl;
			
		}break;
		case 2: {
			cout << "======2.TAO HINH VUONG RONG RUOT =======\n";
			nhapDL(n);
			for (int i = 1; i <= n; i++) {
				
				for (int j = 1;j<=n; j++) {
					if (i == 1 || i == n || j == 1 || j == n)
						cout << "*";
					else
						cout << " ";
				}
				cout << "\n";
			}
			cout << endl;
		}break;
		case 3: {
			cout << "======3.TAO HINH TAM GIAC VUONG RONG RUOT =======\n";
			nhapDL(n);
			for (int i = 1; i <= n; i++) {

				for (int j = 1; j <= n; j++) {
					if (i == n || i == j || j == 1 )
						cout << "*";
					else
						cout << " ";
				}
				cout << "\n";
			}
			cout << endl;
		}break;
		case 4: {
			cout << "======4.TAO HINH TAM GIAC VUONG BEN TRAI =======\n";
			nhapDL(n);
			for (int i = 1; i <= n; i++) {

				for (int j = 1; j <= n; j++) {
					if (i == n == j|| j > n - i)
						cout << "*";
					else
						cout << " ";
				}
				cout << "\n";
			}
			cout << endl;
		}break;
		case 5: {
			cout << "======5.TAO HINH TAM GIAC VUONG DAO NGUOC =======\n";
			nhapDL(n);
			for (int i = 1; i <= n; i++) {

				for (int j = 1; j <= n; j++) {
					if (j==n||i==1||j==n-1)
						cout << "*";
					else
						cout << " ";
				}
				cout << "\n";
			}
			cout << endl;
		}break;


		default:
			cout << "Chuc nang chua phat trien ! \n";
			break;
		}





	}while(chon!=0);
}