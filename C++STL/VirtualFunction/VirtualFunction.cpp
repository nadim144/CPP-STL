// VirtualFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class A
{
public:
	virtual void fun()
	{
		cout << "\n A::fun() called ";
	}
	void fun2()
	{
		cout << "\n A::fun2() called ";
		fun();
	}
};

class B : public A
{
public:
	void fun()
	{
		cout << "\n B::fun() called ";
	}
	void fun2()
	{
		cout << "\n B::fun2() called ";
		fun();
	}
};

class C : public B
{
public:
	void fun()
	{
		cout << "\n C::fun() called ";
	}
	void fun2()
	{
		cout << "\n C::fun2() called ";
		fun();
	}
};
int main()
{
	A a;
	B b;
	C c;
	A* pa = &c;
	B* pb = &c;
	C* pc = &c;
	pa->fun();		//C::fun()
	pa->fun2();		//A::fun2(), C::fun()
	pb->fun();		//C::fun(), 
	pb->fun2();		//B::fun2(), C::fun()
	pc->fun();		//C::fun()
	pc->fun2();		//C::fun2(), C::fun()
	return 0;
}