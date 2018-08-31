 ///
 /// @file    Point.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-10 14:23:21
 ///
 
#include <iostream>
using std::cout;
using std::endl;


//构造函数名字与类名字相同
class Point
{

public:

	//编译器提供的一个默认构造函数
#if 0
	Point()
	{
	
	}
#endif
	//一旦有了一个有参构造函数后，系统就不在提供默认构造函数
	Point(int ix=0,int iy=0)
	{
		cout<<"Point(int,int)"<<endl;
		_ix=ix;//赋值语句，并不是真正的初始化
		_iy=iy;
		
	}
	void print()// 成员函数
	{
		cout<<"("<<_ix
			<<","<<_iy
			<<")"<<endl;
	}

private:
		int _ix;//数据成员，只能通过构造函数初始化
		int _iy;

};

int main(void)
{
	Point p;//ok
	p.print();
	
	Point p1(1,2);
	p1.print();

	Point p2(3);
	p2.print();
	return 0;
}
