#pragma once
#include <map>

#include "book.h"
#include "adaptee.h"

class LookUpTable
{
public:
	virtual int add(const book) = 0; //加入一個值 回傳成功(1) 失敗(0)
	virtual int remove(const book) = 0; //刪除一個值 回傳成功(1) 失敗(0)
	virtual int   remove(const char* bookName, const char* authors, const int price)=0;
	virtual book* find(const char* bookName) = 0;	//查詢一個值
	virtual book* find(const char* bookName, const char* authors)=0;
	virtual book mostExpensive() = 0;  //回傳最貴的書 
	virtual book cheapest() = 0;  	  //回傳最便宜的書 
	virtual float   average() = 0;    //回傳平均書價格
	virtual void  clean( ) =0;        //清除全部 LookUpQueue Data
	
	

};




class adapter_class :public LookUpTable, public adaptee {
	int result;
public:
	int add(const book a) {
		adaptee::add(a, result);
		return result;
	} //TODO //加入一個值 回傳成功(1) 失敗(0)
	int remove(const book a) {
		adaptee::remove(a, result);
		return result;
	} //TODO //刪除一個值 回傳成功(1) 失敗(0)

	int   remove(const char* bookName, const char* authors, const int price)
	{
		book temp(bookName,authors,price);
		adaptee::remove(temp, result);
		return result;
	}
	book* find(const char* bookName) {
		\
			book* ptr;
		adaptee::find(bookName, ptr);
		return ptr;
	} //TODO //查詢一個值
	book* find(const char* bookName, const char* authors)
	{
		book* ptr;
		adaptee::find(bookName, authors, ptr);
		return ptr;

	}
	
	
	book mostExpensive()
	{
		book* ptr;
		adaptee::mostExpensive( ptr);
		return *ptr;
	}
	book cheapest()
	{
		book* ptr;
		adaptee::cheapest(ptr);
		return *ptr;
	}  	  
	float   average()
	{
		return  adaptee::average();
	}  
	void  clean()
	{
		adaptee::clean();
	}

};


class adapter_object :public LookUpTable {
private:
	adaptee ad;
	int result;
public:
	int add(const book a) {
		ad.add(a, result);
		return result;
	} //TODO //加入一個值 回傳成功(1) 失敗(0)
	int remove(const book a) {
		ad.remove(a, result);
		return result;
	} //TODO //刪除一個值 回傳成功(1) 失敗(0)

	int   remove(const char* bookName, const char* authors, const int price)
	{
		book temp(bookName, authors, price);
		ad.remove(temp, result);
		return result;

	}
	book* find(const char* bookName) {
		book* ptr;
		ad.find(bookName, ptr);
		return ptr;
	}
	book* find(const char* bookName, const char* authors)
	{
		book* ptr;
		ad.find(bookName,authors, ptr);
		return ptr;

	}
	book mostExpensive()
	{
		book* ptr;
		ad.mostExpensive(ptr);
		return *ptr;
	}
	book cheapest()
	{
		book* ptr;
		ad.cheapest(ptr);
		return *ptr;
	}
	float   average()
	{
		return  ad.average();
	}
	 void  clean()
	{
		ad.clean();
	}

};







class adapter_class3 :public LookUpTable, public adaptee3 {
	int result;
public:
	int add(const book a) {
		adaptee3::add(a, result);
		return result;
	} //TODO //加入一個值 回傳成功(1) 失敗(0)
	int remove(const book a) {
		adaptee3::remove(a, result);
		return result;
	} //TODO //刪除一個值 回傳成功(1) 失敗(0)

	int   remove(const char* bookName, const char* authors, const int price)
	{
		book temp(bookName, authors, price);
		adaptee3::remove(temp, result);
		return result;
	}
	book* find(const char* bookName) {
		\
			book* ptr;
		adaptee3::find(bookName, ptr);
		return ptr;
	} //TODO //查詢一個值
	book* find(const char* bookName, const char* authors)
	{
		book* ptr;
		adaptee3::find(bookName, authors, ptr);
		return ptr;

	}


	book mostExpensive()
	{
		book* ptr;
		adaptee3::mostExpensive(ptr);
		return *ptr;
	}
	book cheapest()
	{
		book* ptr;
		adaptee3::cheapest(ptr);
		return *ptr;
	}
	float   average()
	{
		return  adaptee3::average();
	}
	void  clean()
	{
		adaptee3::clean();
	}

};


class adapter_object3 :public LookUpTable {
private:
	adaptee3 ad;
	int result;
public:
	int add(const book a) {
		ad.add(a, result);
		return result;
	} //TODO //加入一個值 回傳成功(1) 失敗(0)
	int remove(const book a) {
		ad.remove(a, result);
		return result;
	} //TODO //刪除一個值 回傳成功(1) 失敗(0)

	int   remove(const char* bookName, const char* authors, const int price)
	{
		book temp(bookName, authors, price);
		ad.remove(temp, result);
		return result;

	}
	book* find(const char* bookName) {
		book* ptr;
		ad.find(bookName, ptr);
		return ptr;
	}
	book* find(const char* bookName, const char* authors)
	{
		book* ptr;
		ad.find(bookName, authors, ptr);
		return ptr;

	}
	book mostExpensive()
	{
		book* ptr;
		ad.mostExpensive(ptr);
		return *ptr;
	}
	book cheapest()
	{
		book* ptr;
		ad.cheapest(ptr);
		return *ptr;
	}
	float   average()
	{
		return  ad.average();
	}
	void  clean()
	{
		ad.clean();
	}

};



class adapter_class4 :public LookUpTable, public adaptee4 {
	int result;
public:
	int add(const book a) {
		adaptee4::add(a, result);
		return result;
	} //TODO //加入一個值 回傳成功(1) 失敗(0)
	int remove(const book a) {
		adaptee4::remove(a, result);
		return result;
	} //TODO //刪除一個值 回傳成功(1) 失敗(0)

	int   remove(const char* bookName, const char* authors, const int price)
	{
		book temp(bookName, authors, price);
		adaptee4::remove(temp, result);
		return result;
	}
	book* find(const char* bookName) {

		book* ptr;
		adaptee4::find(bookName, ptr);
		return ptr;
	} //TODO //查詢一個值
	book* find(const char* bookName, const char* authors)
	{
		book* ptr;
		adaptee4::find(bookName, authors, ptr);
		return ptr;

	}


	book mostExpensive()
	{
		book* ptr;
		adaptee4::mostExpensive(ptr);
		return *ptr;
	}
	book cheapest()
	{
		book* ptr;
		adaptee4::cheapest(ptr);
		return *ptr;
	}
	float   average()
	{
		return  adaptee4::average();
	}
	void  clean()
	{
		adaptee4::clean();
	}

};


class adapter_object4 :public LookUpTable {
private:
	adaptee4 ad;
	int result;
public:
	int add(const book a) {
		ad.add(a, result);
		return result;
	} //TODO //加入一個值 回傳成功(1) 失敗(0)
	int remove(const book a) {
		ad.remove(a, result);
		return result;
	} //TODO //刪除一個值 回傳成功(1) 失敗(0)

	int   remove(const char* bookName, const char* authors, const int price)
	{
		book temp(bookName, authors, price);
		ad.remove(temp, result);
		return result;

	}
	book* find(const char* bookName) {
		book* ptr;
		ad.find(bookName, ptr);
		return ptr;
	}
	book* find(const char* bookName, const char* authors)
	{
		book* ptr;
		ad.find(bookName, authors, ptr);
		return ptr;

	}
	book mostExpensive()
	{
		book* ptr;
		ad.mostExpensive(ptr);
		return *ptr;
	}
	book cheapest()
	{
		book* ptr;
		ad.cheapest(ptr);
		return *ptr;
	}
	float   average()
	{
		return  ad.average();
	}
	void  clean()
	{
		ad.clean();
	}

};
