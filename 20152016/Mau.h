#pragma once
#include <iostream>
#include <string>
using namespace std;
class Mau
{
protected:
	string Ten;
	int Level;
	float SatThuong;
	int Hanh;
public:
	virtual void Nhap();
	int Get_SatThuong();
	int Get_Hanh();
	Mau();
	~Mau();
	virtual void TinhSatThuong() = 0;
};

