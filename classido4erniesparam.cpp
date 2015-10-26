// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>



class parent{
	int n;
public:
	parent(){std::cout<<"parent:default counstructor\n";}
	parent(int n){std::cout<<"parent:constructor with param\n";
		this->n=n;
	}
	~parent(){
		std::cout<<"parent: distructor";}};
	class child: public parent{
	int n;
	public:
	child(){std::cout<<"child:default counstructor\n";}
	child(int n/* int m*/):parent(n){std::cout<<"child:constructor with param: "<<n<<"\n";
		this->n=n;
	}
	~child(){
		std::cout<<"parent: distructor";}

	};
int _tmain(int argc, _TCHAR* argv[])
{

	child p1(5/*,6*/);

	system("pause");
	return 0;
}