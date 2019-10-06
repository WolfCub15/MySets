#include "Set.h"
void delenie_stroki_razn_delit(std::string *w, std::string st, std::string zn, int &k) {
	k = 0;
	for (int i = 0; i < st.size(); i++) {
		if (zn.find(st[i]) == -1) {
			w[k].push_back(st[i]);
		}
		else {
			if (w[k].size() > 0) {
				k++;
			}
			w[k][0] = st[i];
		}
	}
}



Set::Set(int _U) {
	U_size = _U;
	bit_field = TBitField(_U);
}

Set::Set(const Set &tmp) {
	U_size = tmp.U_size;
	bit_field = TBitField(tmp.bit_field);
}
Set & Set::operator=(const Set &tmp) {
	if (&tmp == this) return *this;
	U_size = tmp.U_size;
	bit_field = tmp.bit_field;
	return *this;
}
Set::~Set() {

}
Set::Set(int sizeU, std::string str) {
	TBitField TB(sizeU);
	bit_field = TB;
	U_size = sizeU;
	std::string *w;
	str += " ";
	w = new std::string[sizeU];
	int count;
	w[0] = "";
	std::string zn = " .,?!";
	delenie_stroki_razn_delit(w, str, zn, count);
	for (int i = 0; i < count; i++) {
		int tmp;
		tmp = stoi(w[i]);
		if ((tmp > 0) && (tmp <= U_size)) {
			bit_field.Add(tmp);
		}
	}
}
void Set::del(int k) {
	if (k > 0 && k <= U_size) {
		bit_field.Del(k);
	}
}
void Set::add(int k) {
	if (k > 0 && k <= U_size) {
		bit_field.Add(k);
	}
}
Set Set::operator +(const Set tmp) {
	Set res(*this);
	res.bit_field = bit_field + tmp.bit_field;
	return res;
}
Set Set::operator -(const Set tmp) {
	Set res(*this);
	res.bit_field = bit_field - tmp.bit_field;
	return res;
}
Set Set::operator *(const Set tmp) {
	Set res(*this);
	res.bit_field = (bit_field) * (tmp.bit_field);
	return res;
}
Set Set::operator ~(void) {
	Set res(*this);
	res.bit_field = ~bit_field;
	return res;
}
std::string Set::Set_to_string() {
	return bit_field.TBitField_ToString(U_size);
}