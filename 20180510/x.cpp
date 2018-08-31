 ///
 /// @file    x.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-10 15:34:26
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class X{

	public:
		//构造函数
		X(int ix)
		:_ix(ix)
		 ,_iy(_ix)//初始化
		{
			cout<<"X(int)"<<endl;
		
		}



		void print()
		{
			cout<<"("<<_ix
				<<","<<_iy
				<<")"<<endl;
		}
	private:
		int _iy;//初始化的顺序是根据这里定义的顺序来的
		int _ix;
};

int main(void)
{
	X x(10);
	x.print();
	return 0;
}
