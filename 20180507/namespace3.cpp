 ///
 /// @file    namespace1.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 20:18:54
 ///
 
#include <iostream>

//命名空间的第三种使用方式：using声明机制(推荐使用）
using std::cout;
using std::endl;
namespace A
{
	void displayA()
	{
		//命名空间的第三种方式：作用域限定符
		cout<<"displayA()"<<endl;
	}
namespace B
{
	void displayB()
	{
		cout<<"displayB()"<<endl;
	}
}
}
int main(void)	
{
	A::displayA();
	A::B::displayB();
	return 0;
}	
