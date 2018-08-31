 ///
 /// @file    Computer.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 21:54:32
 ///

#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	//在类内部实现成员函数
	void print()//成员函数
	{
		cout<<"品牌是："<<_brand<<endl;
		cout<<"价格是："<<_price<<endl;
	}

	void setBrand(const char *brand)
	{
		strcpy(_brand,brand);
	}

	void setPrice(float price)
	{
		_price=price;
	}


private:
	char _brand[20];//数据成员
	float _price;
	//float price_;
	//float m_price;
};

int main(void)
{
	Computer com;
	com.setPrice(4999);
	com.setBrand("xiaomi");
	com.print();

	return 0;
}



