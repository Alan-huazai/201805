///
 /// @file    string.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 22:22:38
 ///
 
//C的头文件统一放在C++头文件的前面

#include <stdlib.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;


void test0(void)
{
	char arr1[]="hello";//C字符串会以一个’\0'结尾
	char arr2[]=",world";
	
	int length=sizeof(arr1)+sizeof(arr2);
	cout<<"length="<<length<<endl;
	char *p=(char *)malloc(length);
	memset(p,0,length);
	strcpy(p,arr1);
	cout<<"sizoof(p)="<<sizeof(p)<<endl;
	strcat(p,arr2);
	cout<<"sizoof(p)="<<sizeof(p)<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<p[i];
	}
	cout<<endl;
	cout<<"arr1="<<arr1<<endl;
	cout<<"arr2="<<arr2<<endl;
	cout<<"p="<<p<<endl;
	cout<<"sizoof(p)="<<sizeof(p)<<endl;
	cout<<"sizoof(arr1)="<<sizeof(arr1)<<endl;
	cout<<"sizoof(arr2)="<<sizeof(arr2)<<endl;
	//cout<<"arr1="<<arr1<<endl;
	//cout<<"arr2="<<arr2<<endl;
//	cout<<"*p="<<p<<F2><endl;
	free(p);
}

int main(void)
{
	test0();
	return 0;
}
