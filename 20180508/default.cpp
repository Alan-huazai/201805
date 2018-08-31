 ///
 /// @file    default.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 21:38:37
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int add(int x,int y=10)
{
	return x+y;
}

//不能出现默认参数无用的情况
#if 0
int add(int x,int y,int z=10)
{
	return x+y+z;
}
#endif

//默认参数的设置只能是从右到左
#if 0
int add(int x,int y=10,int z)
{
	return x+y+z;
}
#endif

int main(void)
{
	cout<<"add(a,b)="<<add(1)<<endl;
	cout<<"add(a,b)="<<add(1,2)<<endl;
	return 0;
}

