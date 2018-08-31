 ///
 /// @file    string.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 16:35:45
 ///

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


int test0(void)
{
	char a[]="hello";
	char b[]=",world";
	int length=sizeof(a)+sizeof(b);
	char *pstr=(char*)malloc(length);
	memset(pstr,0,length);
	strcpy(pstr,a);
	strcat(pstr,b);
	cout<<"pstr="<<pstr<<endl;
	
	char *p1=strstr(pstr,"world");//返回的是第一次出现的地址
	char *ppstr=(char*)malloc(6);
	memset(ppstr,0,6);
	strncpy(ppstr,p1,3);

	if(NULL==p1)
	{
		cout<<"不是子串"<<endl;
	}
	cout<<"ppstr="<<ppstr<<endl;

	free(pstr);
	free(ppstr);
}

int test1(void)
{
	int a=100;
	//（void)a
	//"hello,world"  const char*  C风格的字符串
	string s1="hello";
	string s2=",world";
	string s3=s1+s2+"shengzhen";
	s3.append("wangdao");//追加到s3后边
	cout<<"s3="<<s3<<endl;

	//可以把string看成一个char型的数组
	for(size_t i=0;i<s3.size();i++)
	{
		cout<<s3[i];
	}
	cout<<endl;

	//截取子串
	size_t pos=s3.find("world");
	cout<<"pos="<<pos<<endl;
	string s4=s3.substr(pos,5);//获取s3pos后面的5个字符
	cout<<"s4="<<s4<<endl;

	string s5=s3.substr(s3.find("world"),5);
	cout<<"s5="<<s5<<endl;
}

int main(void)
{
	//test0();
	test1();
	return 0;
}
