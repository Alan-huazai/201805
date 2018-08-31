 ///
 /// @file    namespace1.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 20:18:54
 ///
 
#include <iostream>
using namespace std;//using编译指令
namespace A
{
	void display()
	{
		cout<<"display"<<endl;
	}
}
//using namespace A;
int main(void)	
{
	display();
	return 0;
}	
