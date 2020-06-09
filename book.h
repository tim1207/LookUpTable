#pragma once
#include <string>
#include <iostream>
class LookUpTable;
using namespace std;
class book
{
	friend ostream& operator<<(ostream&, const book&);
	friend class adaptee;

	friend class adaptee3;
	friend class adaptee4;

private:
	string* bookName;
	string* authors;
	int price;

	// ...
public:

	book() :price(0) {}
	
	book(const char* b, const char* a, const int p)
	{
		bookName = new string(b);		authors = new string(a);		price = p;
	}

	
	void assign(const char* b, const char* a, const int p)
	{
		bookName =  new string(b) ;		authors = new string(a);		price = p;
	}

	
	
	
};

ostream& operator<<(ostream& os, const book& b);
