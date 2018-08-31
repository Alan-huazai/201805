 ///
 /// @file    memery.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 20:58:36
 ///

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

int f=5;//就算不赋初值，默认值为0
const int e=4;//在文字常量区
int test0(void)
{
	int a=1; //栈区
	char b[]="123456";//栈区
	const int c=2;//在栈区
	static int d=3;//在全局静态区，即使函数的生命周期结束任然能访问
	
	char *p;//是在常量区
	p=new char(10);//p中所储存的地址在常量区中

	printf("&p=%p\n",&p);
	printf("p=%p\n",p);
	printf("test0=%p\n",test0);	
}
int main(void)
{
	test0();
	
	return 0;
}
