 ///
 /// @file    reference.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 02:42:09
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//1.参数传递方式------>值传递------>进行复制
void swap1(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
}


//2、参数传递方式------>地址传递------>值传递------>进行复制
void swap2(int *p1,int *p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}

//3.参数传递方式------>引用传递------>没有复制------>直接对参数进行操作
//效率比值传递要高
void swap3(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

void test0(void)
{
	int a=1;
	int &ref=a;//引用就是变量的一个别名
	//int &ref;引用不能单独存在，必须得绑定到一个实体上
	cout<<"ref="<<ref<<endl;
	ref=2;
	cout<<"ref="<<ref<<endl;
	cout<<"a="<<a<<endl;

}

int main(void)
{
	//test0();
	int a=1,b=2;
	cout<<"交换前:a="<<a<<",b="<<b<<endl;
//	swap1(a,b);
//	swap2(&a,&b);
	swap3(a,b);
	cout<<"交换后：a="<<a<<",b="<<b<<endl;
	return 0;
}
