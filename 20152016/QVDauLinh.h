#pragma once
#include "QuaiVat.h"
class QVDauLinh:public QuaiVat
{
public:
	QVDauLinh()
	{
		
	}
	~QVDauLinh()
	{

	}
	void TinhSatThuong()
	{
		SatThuong = Level * 7;
	}
};

