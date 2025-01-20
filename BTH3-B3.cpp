#include<iostream>
#include<cmath>
using namespace std;


/*bool BintoDec(int n, int& sothapphan) {
	int tachso,sothapphan=0;
	int i = 0, tam = n;
	while (tam != 0) {
		tachso = tam % 10;
		if (tachso == 0 || tam == 1) {
			sothapphan = sothapphan + tachso * pow(2, i);
			i++;
			tam = tam / 10;
		}else {
			sothapphan = 0;
			}return false;
         
	}
}*/
int tinhthapphan(int n) {
	int thapphan = 0,tam=n,tachso,i=0;
	
	while (tam != 0) {
		tachso = tam % 10;
		if (tachso == 0 || tachso == 1) {
			thapphan += tachso * pow(2, i);
			i++;
			tam /= 10;
		}
		else
			cout << "Nhap sai so nhi thuc \n";
		
	 }
	return thapphan;
}
int tinhSDN(int n) {
	int tam = n,sdn=0;
	while (tam != 0) {
		sdn = sdn * 10 + tam % 10;
		tam /= 10;
	}
	cout << "So dao nguoc : " << sdn << endl;
	return sdn;
}
bool isSNT(int n) {
	bool SNT = true;
	if (n < 2) {
		SNT = false;
	}
	else {
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				SNT = false;
				break;
			}
		}
	} return SNT;
}
void nhapDL(int &n) {
	do {
		cout << "Nhap so nguyen duong n : ";
		cin >> n;
		if (n < 0)
			cout << "Nhap so nguyen duong sai (n phai la so duong) \n";
	} while (n < 0);
}
int main() {
	int chon,n;
	do {
	cout << "===============MENU=================\n";
	cout << "==0.Thoat                         ==\n";
	cout << "==1.So dao nguoc                  ==\n";
	cout << "==2.So nguyen to                  ==\n";
	cout << "==3.Thua so nguyen to             ==\n";
	cout << "==4.So doi xung                   ==\n";
	cout << "==5.Tu nhi thuc sang phan thuc    ==\n";
	do {
	cout << "Nhap lua chon cua ban : \n";
	cin >> chon;
	
	if (chon < 0 || chon>5)
		cout << "Chuc nang chua phat trien them ! \n";
	} while (chon < 0 || chon>5);
	system("cls");
	switch (chon)
	  {
	case 0:
		cout << "Cam on da dung dich vu ! \n";
		break;
	case 1:
		cout << "=====SO DAO NGUOC=====\n";
		nhapDL(n);
		tinhSDN(n);
		break;
	case 2:
		{
		cout << "======SO NGUYEN TO======\n";
		nhapDL(n);
		bool SNT=isSNT(n);
		if (SNT == true) {
			cout << n << " la so nguyen to \n";
		}
		else
			cout << n << " Khong la so nguyen to \n";
		
        }break;
	case 3: 
	{
		cout << "=====THUA SO NGUYEN TO====\n";
		nhapDL(n);
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				cout << i;
				n = n / i;
			}
	     }
		cout << endl;
    }break;
	case 4:
	{
		cout << "=====SO DOI XUNG======\n";
		nhapDL(n);
		int sdn = tinhSDN(n);
		if (n == sdn) {
			cout << n << " day la so doi xung " << endl;
		}
		else
			cout << n << " day khong phai so doi xung " << endl;
	}break;
	case 5:
	{
		cout << "=====TU NHI THU SANG PHAN THUC=====\n";
		nhapDL(n);
		int bintodec=tinhthapphan(n);

		if(bintodec==true){
		cout <<n<<" sang thap phan :"<<bintodec<<endl;
		}
		else
			cout << "Nhap sai roi(so nhi thuc chi co so 0 va 1)\n";
	
	}break;

	default:
		break;
  }
 } while (chon != 0);
	return 0;
}