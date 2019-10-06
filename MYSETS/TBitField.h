#include <iostream> 
#include <string> 

class TBitField {

private:
	int *mem;// память для представления битового поля
	int size; // к-во эл-тов Мем для представления бит.поля
	int Get_Bit(const int k);
	int Get_Byte(const int k);
public:
	TBitField(int sizeU = 0);
	TBitField(const TBitField &tmp);
	~TBitField();
	TBitField & operator=(const TBitField &tmp);
	TBitField  operator +(const TBitField tmp);
	TBitField  operator *(const TBitField tmp);
	TBitField  operator-(const TBitField tmp);
	TBitField  operator ~(void);
	void Add(int k);
	void Del(int k);
	std::string TBitField_ToString(int sizeU);
};



