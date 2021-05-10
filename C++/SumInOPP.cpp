#include<iostream>
using namespace std;
class test
{
	private:
		int data1;
		int data2;
		int data3;
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
				//return data2;
			}
			int function3()
			{
				cout<<"Enter data3\n";
				cin>>data3;
				//return data3;
			}
};
int main()
{
	int x;
	test o1,o2,o3;
	o1.function1();
	o2.function2();
	o3.function3();
	x=o1.function2()+o3.function3();
	cout<<"Sum is "<<x;
}
