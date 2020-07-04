#include "DanhSach.h"
void DanhSach::Nhap()
{
	int n;
	cout << "Nhap so luong nguoi choi va quai vat :";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		system("cls");
		Mau* temp;
		int choice,choice1;
		cout << "1.Nguoi \t 2.Quai vat ";
		do
		{
			cin >> choice;
		} while (choice < 1 || choice>2);
		if (choice == 1)
		{
			temp = new Nguoi;
		}
		else
		{
			system("cls");
			cout << "1.Quai vat thong thuong \t 2.Quai vat dau linh";
			do
			{
				cin >> choice1;
			} while (choice1 < 1 || choice1>2);
			if (choice1 == 1)
			{
				temp = new QVThongThuong;
			}
			else
				temp = new QVDauLinh;
		}
		temp->Nhap();
		List.push_back(temp);

	}
}
Mau* DanhSach::TimSTCaoNhat()
{
	int max = 0;
	Mau* temp = List[0];
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i]->Get_SatThuong() > max)
		{
			max = List[i]->Get_SatThuong();
			temp = List[i];
		}
	}
	return temp;
}
DanhSach::DanhSach()
{

}
DanhSach::~DanhSach()
{
	for (int i = 0; i < List.size(); i++)
		delete List[i];
}