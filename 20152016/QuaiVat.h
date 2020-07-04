#pragma once
#include "Mau.h"
class QuaiVat:public Mau
{
public:
	QuaiVat()
	{

	}
	~QuaiVat()
	{

	}
	void Nhap()
	{
		cout << "1.He Kim \t 2.He Thuy \t 3.He Moc \t 4.He Hoa \t 5.He Tho";
		cout << "\nNhap hanh :";
		cin >> Hanh;
		Mau::Nhap();
	}
	virtual void TinhSatThuong()=0;
};

