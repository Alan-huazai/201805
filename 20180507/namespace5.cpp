 ///
 /// @file    namespace5.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 21:24:48
 ///
#include<stdio.h>
#include <iostream>

//C所有库函数，在C++中都位于匿名命名空间的
using std::cout;
using std::endl;
int  a=100; //全局变量，是位于匿名命名空间的

namespace B
{
	int a=1000;
}

namespace A
{
	int a=10;
	void displayA(int a)
	{
		cout<<"实参a="<<a<<endl;
		cout<<"命名空间A中的a="<<A::a<<endl;
		cout<<"命名空间B中的a="<<B::a<<endl;
		cout<<"全局变量a="<<::a<<endl;
	}

}//end of A
int main(void)
{
	::printf("hello,world\n");
	A::displayA(3);
	return 0;
}


