 ///
 /// @file    Computer1.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 22:07:13
 ///

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer{
private:
	char _brand[20];
	float _price;
public:
	void print(void);
	void setPrice(float price);
	void setBrand(const char *brand);
};

void Computer::print()
{
	cout<<"品牌是："<<_brand<<endl;
	cout<<"价格是："<<_price<<endl;
}
void Computer::setBrand(const char *brand)
{
	strcpy(_brand,brand);
}

void Computer::setPrice(float price)
{
	_price=price;
}

int main(void)
{
		Computer com;
		com.setBrand("xiaomi");
		com.setPrice(4999);
		com.print();
	return 0;
}

