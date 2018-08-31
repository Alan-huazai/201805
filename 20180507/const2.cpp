 ///
 /// @file    const2.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-07 23:15:58
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{
	int a=20;
	int b=200;
	cout<<"a="<<a<<endl;

	//1.第一种情况
	const int *pa=&a;//常量指针（pointer to const)
	//*pa=30;   //error,无法通过pa指针改变所指变量的值
	pa=&b;//pa指针可以改变指向

	//2.第二种情况
	int const *paa=&a;//与第一种情况一致

	//3.第三种情况：
	int * const pc=&a;//指针常量（const pointer)
	*pc=30;//可以通过pc改变pc所指的变量
	//pc=&b; //error,无法改变PC的指向
	
	//4.第四种情况
	const int * const pd=&a;//两者都不能进行修改

	return 0;
}

