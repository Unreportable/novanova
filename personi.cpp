// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Person{
	string name;
	string surname;
	int age;
public:
	Person(){cout<<"DEFAULT KONS"<<"\n";}
	Person(string name,string surname, int age){cout<<name<<" "<<surname<<" "<<age<<"\n";
	this->name=name;
	this->surname=surname;
	this->age=age;}
	/*class*/ 



};





int _tmain(int argc, _TCHAR* argv[])
{	
	SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	int i;
	cin>>i;
	string *a = new string[i];
	string *b = new string[i];
	int *c = new int[i];

	


	for(i=0;i<2;i++)
	cin>>a[i]>>b[i]>>c[i];


	for(i=0;i<2;i++)
	Person p1(a[i],b[i],c[i]);




	if(argc>1){std::cout<<argv[1]<<"\n";}else{std::cout<<"NO ARGS";}

	system("pause");
	return 0;
}

