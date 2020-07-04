#pragma once
#include "Mau.h"
class Nguoi:public Mau
{
private:
	int MonPhai;
public:
	void Nhap();
	Nguoi();
	~Nguoi();
	void TinhSatThuong();
};

