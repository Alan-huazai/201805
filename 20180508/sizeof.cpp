 ///
 /// @file    sizeof.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-08 22:40:31
 ///

#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	char buf1[128]="hello";
	cout<<"sizeof(buf1)="<<sizeof(buf1)<<endl;
	cout<<"strlen(buf1)="<<strlen(buf1)<<endl;

	char buf2[]="hello";
	cout<<"sizeof(buf1)="<<sizeof(buf2)<<endl;
	cout<<"strlen(buf1)="<<strlen(buf2)<<endl;
	return 0;
}
