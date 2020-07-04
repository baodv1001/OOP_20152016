#include "DanhSach.h"
void Nhap(Mau* &A)
{
	system("cls");
	int choice, choice1;
	cout << "1.Nguoi \t 2.Quai vat ";
	do
	{
		cout << "\nNhap doi tuong :";
		cin >> choice;
	} while (choice < 1 || choice>2);
	if (choice == 1)
	{
		A = new Nguoi;
	}
	else
	{
		system("cls");
		cout << "1.Quai vat thong thuong \t 2.Quai vat dau linh";
		do
		{
			cout << "\nLoai quai vat :";
			cin >> choice1;
		} while (choice1 < 1 || choice1>2);
		if (choice1 == 1)
		{
			A = new QVThongThuong;
		}
		else
			A = new QVDauLinh;
	}
	A->Nhap();
	A->TinhSatThuong();
}
void TinhSatThuong(int x, int y, float& ST1, float& ST2)
{
	if (y < x)
		y += 5;
	switch (y-x)
	{
	case 1:
		ST1 *= 1.1;
		break;
	case 2:
		ST1 *= 1.2;
		ST2 *= 0.8;
		break;
	case 3:
		ST1 *= 0.8;
		ST2 *= 1.2;
		break;
	case 4:
		ST2 *= 1.1;
		break;
	default:
		break;
	}
}
int main()
{
	Mau* A,*B;
	Nhap(A);
	Nhap(B);
	int x = A->Get_Hanh();
	int y = B->Get_Hanh();
	float ST1 = A->Get_SatThuong();
	float ST2 = B->Get_SatThuong();
	TinhSatThuong(x, y, ST1, ST2);
	cout << "Sat thuong A len B la :" << ST1;
	cout << "\ntSat thuong B len A la :" << ST2;
}