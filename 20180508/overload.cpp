 ///
 /// @file    overload.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 20:26:13
 ///

#include <stdio.h>


//C++语言支持函数的重载
//实现原理：名字改编（name mangling)
//操作步骤：当函数名相同时，根据参数的类型，个数顺序进行


int add(int x,int y)
{
	return x+y;
}

int add(int x,int y,int z)
{
	return x+y+z;
}

double add(double x,double y,double z)
{
	return x+y+z;
}

int main(void)
{
	int a=1,b=2,c=3;
	//cout<<"add(a,b)="<<add(a,b)<<endl;
	//cout<<"add(a,b,c)="<<add(a,b,c)<<endl;
	printf("add(a,b)=%d\n",add(a,b));
	printf("add(a,b,c)=%d\n",add(a,b,c));
	return 0;
}


