#pragma once
#include "Nguoi.h"
#include "QVDauLinh.h"
#include "QVThongThuong.h"
#include <vector>
class DanhSach
{
private:
	vector<Mau*> List;
public:
	void Nhap();
	Mau* TimSTCaoNhat();
	DanhSach();
	~DanhSach();
};

