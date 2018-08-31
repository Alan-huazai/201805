 ///
 /// @file    static.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 19:57:26
 ///
 
//强制类型转换
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

void test0(void)
{
	double a=5.55;
	int b=6;
	
	b=(int)a;
	b=int(a);
	cout<<"b="<<b<<endl;
}

void test1(void)
{
	double a=5.55;
	int b=9;
	b=static_cast<int>(a);
	cout<<"b="<<b<<endl;

}

void test2(void)
{
	//const_cast  dynamic_cast  reinterpret_cast  static_cast四个强制转换运算符
	int *p=static_cast<int*>(malloc(sizeof(int)));
	//int *p=(int *)malloc(sizeof(int));两者相同
	*p=10;
	cout<<"*p="<<*p<<endl;

}

int main(void)
{
//	test0();
	test1();
	return 0;
}
