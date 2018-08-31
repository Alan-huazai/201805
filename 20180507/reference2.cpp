 ///
 /// @file    reference2.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 03:05:03
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int arr[5]={1,2,3,4,5};

//直接返回int型数据，return要进行复制
int func1()
{
	return arr[0];
}

//如果返回值是引用，return时不复制
int & func2()
{
	return arr[0];
}

//不要返回一个局部变量的引用
int& func3()
{
	int a=1;
	//return a;
}

//不要轻易返回一个堆内存的引用，除非你有一个非常好的内存回收机制
int& func4()
{
	int *p=new int(10);
	return *p;
}

int main(void)
{

	func2()=10;
	cout<<"arr[0]="<<arr[0]<<endl;
	int x=1,y=2,z;
	z=x+y+func4();//只要调用func4()就会发生内存泄漏
	cout<<"z="<<z<<endl;
	int &ref=func4();
	delete (&ref);//ref的地址
	
	return 0;
}

