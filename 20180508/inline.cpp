 ///
 /// @file    inline.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 22:06:48
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//注意：宏只是作简单的式子替换，并且不作检查
#define Max(x,y) ((x)>(y)?(x):(y))

//inline函数与带参数的宏定义有一样的效果，运行时会将max(a,b)进行替换，
//在编译的时候就进行替换
//如果是一个函数调用比宏开销大的多
inline int max(int x,int y)
{
	return x>y?x:y;
}


int main(void)
{
	int a=1,b=2;
	cout<<"Max(a,b)="<<Max(a,b)<<endl;
	cout<<"max(a,b)="<<max(a,b)<<endl;
	return 0;
}
