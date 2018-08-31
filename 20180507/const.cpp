 ///
 /// @file    const.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 23:08:22
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//区别：
//	1。宏定义发生的时机实在预处理，只是进行简单的字符串替换，没有进行类型检查
//	2.const修饰的变量，发生的时机是在编译时，具有类型检查功能
#define Max 100


int main(void)
{
	cout<<"Max="<<Max<<endl;
	const int a=10;
	//a=1; 只读变量，无法修改
	cout<<"a="<<a<<endl;
	//const int b;  常量必须进行初始化
	return 0;
}
