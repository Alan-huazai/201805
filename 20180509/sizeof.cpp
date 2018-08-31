 ///
 /// @file    sizeof.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 14:42:33
 ///
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

int test0(void)
{
	char a[6]="hello";
	char *p=(char*)malloc(6);
	memset(p,0,10);
	strcpy(p,"hello");
	cout<<"p[0]="<<p[0]<<endl;
	cout<<"p[1]="<<p[1]<<endl;
	cout<<"p="<<p<<endl;
//	p="hello";
	cout<<"sizeof(*p)="<<sizeof(*p)<<endl;//指针所指变量的长度
	cout<<"sizeof(p)="<<sizeof(p)<<endl;//指针p所占的长度为8
	free(p);
}
int main(void)
{

	test0();
	return 0;
}
