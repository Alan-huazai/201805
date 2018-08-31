 ///
 /// @file    overload.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 20:26:13
 ///

#include <stdio.h>

#include <iostream>
using std::cout;
using std::endl;
int add(int x,int y)
{
	return x+y;
}

int add(int x,int y,int z)
{
	return x+y+z;
}

int main(void)
{
	int a=1,b=2,c=3;
	printf("add(a,b)=\n",add(a,b));
	printf("add(a,b,c)=\n",add(a,b,c));
	return 0;
}


