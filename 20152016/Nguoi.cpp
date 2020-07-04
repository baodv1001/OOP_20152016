#include "Nguoi.h"
void Nguoi::Nhap()
{
	cout << "1.Thieu Lam \t 2.Thien Vuong Bang \t 3.Nga My \t 4. Thuy Yen Mon \t 5.Ngu Doc Giao \n 6.Duong Mon \t 7.Cai Bang \t 8.Thien Nhan giao \t 9. Con Lon \t 10.Vo Dang \t  ";
	cout << "\nChon mon phai : ";  cin >> MonPhai;
	Hanh = (MonPhai + 1) / 2;
	Mau::Nhap();
	
}
void Nguoi::TinhSatThuong()
{
	SatThuong = Level * 5;
}
Nguoi::Nguoi()
{
	
}
Nguoi::~Nguoi()
{

}