 ///
 /// @file    namespace1.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 20:18:54
 ///
 
#include <iostream>
//名称空间可以出现在多个地方
namespace B
{
	void displayB();
}
namespace A
{
	void displayA()
	{
		//命名空间的第二种方式：作用域限定符
		std::cout<<"displayA()"<<std::endl;
		B::displayB();
	}
}//end of namespace A
namespace B
{
	void displayB()
	{
		A::displayA();
	}
}//end of namespace B
//using namespace A;
int main(void)	
{
	A::displayA();
	return 0;
}	
