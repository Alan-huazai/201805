 ///
 /// @file    new.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-05-09 17:32:15
 ///

#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

//malloc/free与new/delete的区别：
//malloc与free都是标准的库函数，(<stdlib.h>),new、delete是表达式
//malloc只负责开辟空间，new不仅可以开辟空间，还可以初始化

int main(void)
{
	int *p=(int *)malloc(sizeof(int)*10);
	*p=90;
	cout<<"*p="<<*p<<endl;
	free(p); //防止内存泄漏	
	
	int *p1=new int(1);//1个初始化的int
	cout<<"*p1="<<*p1<<endl;
	delete p1;
	int *p2=new int[10];//10个未初始化的int
	//初始化
	for(int i=0;i<10;++i)
	{
		p2[i]=i;
	}

	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<endl;
	}
	delete []p2;
	return 0;
}
