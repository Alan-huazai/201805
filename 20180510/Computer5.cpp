 ///
 /// @file    Computer5.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-10 15:49:19
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer{

public:
	//构造函数
	Computer(const char * brand,float price)
	{
		
	}
	void setPrice(float price);
	void setBrand(const char *brand);
	void print();
private:
	char * _brand;
	float _price;
};

void Computer::setPrice(float price)
{
	_price=price;
}

void Computer::setBrand(const char *brand)
{
	strcpy(_brand,brand);
}

void Computer::print()
{
	cout<<"电脑的"<<endl;
}
