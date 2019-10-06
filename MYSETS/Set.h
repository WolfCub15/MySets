
#include "TBitField.h"
#include <iostream> 
#include <string> 

class Set
{
private:
	int U_size;
	TBitField bit_field;
public:
	Set(int _U = 0);
	Set(const Set &tmp);
	Set &operator=(const Set &tmp);
	Set(int sizeU, std::string str);
	void del(int k);
	void add(int k);
	Set operator +(const Set tmp);
	Set operator *(const Set tmp);
	Set operator -(const Set tmp);
	Set operator ~(void);
	std::string Set_to_string();
	~Set();
};


