#include "Mau.h"
void Mau::Nhap()
{
	cin.ignore();
	cout << "Nhap ten :";
	getline(cin, Ten);
	cout << "Nhap cap do :";
	cin >> Level;
}
int Mau::Get_SatThuong()
{
	return SatThuong;
}
int Mau::Get_Hanh()
{
	return Hanh;
}
Mau::Mau()
{
	Level = SatThuong = Hanh = 0;
}
Mau::~Mau()
{

}