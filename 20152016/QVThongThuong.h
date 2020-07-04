#pragma once
#include "QuaiVat.h"
class QVThongThuong:public QuaiVat
{
public:
	QVThongThuong()
	{
		
	}
	~QVThongThuong()
	{

	}
	void TinhSatThuong()
	{
		SatThuong = Level * 3;
	}
};

