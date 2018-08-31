 ///
 /// @file    namespace1.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 20:18:54
 ///
 
#include <iostream>

namespace A
{
	void displayA()
	{
		//命名空间的第二种方式：作用域限定符
		std::cout<<"displayA()"<<std::endl;
	}
}
//using namespace A;
int main(void)	
{
	A::displayA();
	return 0;
}	
