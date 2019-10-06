#include "TBitField.h"
int TBitField::Get_Bit(const int k) {
	return ((k - 1) % (8 * sizeof(int)));
}

int TBitField::Get_Byte(const int k) {
	return ((k - 1) / int(8 * sizeof(int)));
}

TBitField::TBitField(int sizeU) {
	size = sizeU / (8 * sizeof(int)) + 1;
	mem = new int[size];
	for (int i = 0; i < size; i++) {
		mem[i] = 0;
	}
}

TBitField::TBitField(const TBitField &tmp) {
	size = tmp.size;
	mem = new int[size];
	for (int i = 0; i < size; i++) {
		mem[i] = tmp.mem[i];
	}
}

TBitField::~TBitField() {
	delete[]mem;
}

TBitField & TBitField::operator=(const TBitField &tmp) {
	if (&tmp == this) return *this;     //объект нельзя присваивать самому себе
	if (size != tmp.size) {
		if (size != 0) {
			delete[]mem;
		}
		size = tmp.size;
		mem = new int[size];
	}
	for (int i = 0; i < size; i++) {
		mem[i] = tmp.mem[i];
	}
	return *this;
}

void TBitField::Add(int k) {
	mem[Get_Byte(k)] |= (1 << (Get_Bit(k)));
}

void TBitField::Del(int k) {
	mem[Get_Byte(k)] &= (~(1 << (Get_Bit(k))));
}

std::string TBitField::TBitField_ToString(int sizeU) {
	int k;
	std::string str = "";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (8 * sizeof(int)); j++) {
			if ((mem[i] & (1 << j)) != 0) {
				k = i * (8 * sizeof(int)) + j + 1;
				if (k <= sizeU) {
					str += std::to_string(k) + ' ';
				}
			}
		}
	}
	if (str.size() != 0) str.pop_back();
	return str;
}

TBitField  TBitField::operator+(const TBitField tmp) {
	TBitField res(*this);
	for (int i = 0; i < res.size; i++) {
		res.mem[i] |= tmp.mem[i];
	}
	return res;
}
TBitField  TBitField::operator *(const TBitField tmp) {
	TBitField res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] &= tmp.mem[i];
	}
	return res;
}
TBitField  TBitField::operator ~(void) {
	TBitField res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] = ~(res.mem[i]);
	}
	return res;
}

TBitField  TBitField::operator-(const TBitField tmp) {
	TBitField res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] &= ~tmp.mem[i];
	}
	return res;
}


