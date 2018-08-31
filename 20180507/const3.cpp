 ///
 /// @file    const3.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 02:28:29
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{
	int a=1;
	int b=2;
	//1.常量指针，能改变指向的变量，但是不能改变所指向变量的值
	const int *p1=&a;
	//*p1=3;//error 不能更改
	p1=&b;
	cout<<"*p1="<<*p1<<endl;
	
	//2.使用方法同第一种
	int const *p2=&a;

	//3.指针常量，能改变指向变量的值，但是不能改变所指向的变量
	int * const p3=&a;
	*p3=b;
	//p3=&b;//error
	cout<<"*p3="<<*p3<<endl;
	return 0;
}

