#include<iostream>
using namespace std;

class A
{
public:
	A() {} //Constructor
	void output() { cout << "Hi" << endl; }
};

class B : public A
{
public:
	B() {} //Constructor
};
class C : public A
{
public:
	C() {} //Constructor
};

int main()
{
	A *ptr;
	B b_object;
	C c_object;

	ptr = &b_object;
	ptr->output();

	ptr = &c_object;
	ptr->output();

	return 0;
}
