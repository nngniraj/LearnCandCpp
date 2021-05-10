#include<iostream>
using namespace std;
class test
{
	private:
		int data1;
		int data2;
		public:
			void function1()
			{
				data1=3;
				cout<<"Data1:"<<data1<<"\n";
			}
			int function2()
			{
				cout<<"Enter data2\n";
				cin>>data2;
				return data2;
			}
};
int main()
{
	int x;
	test o1,o2;
	o1.function1();
	x=o2.function2();
	cout<<"The value of data2 is "<<x;
}
