#include<iostream>
#include<conio.h>
using namespace std;
class CALC
{
	public:
		CALC(int i=0)
		{
			res=i;
		}
		void addnumber(int num1, int num2)
		{
			res=num1+num2;
		}
		void subnumber(int num1, int num2)
		{
			res=num1-num2;
		}
		void mulnumber(int num1, int num2)
		{
			res=num1*num2;
		}
		void divnumber(int num1, int num2)
		{
			res=num1/num2;
		}
		int getresult()
		{
			return res;
		}
	private:
		int res;
};
int main()
{

	CALC cob;
	int a, b;
	cout<<"Enter two number: ";
	cin>>a>>b;
	cob.addnumber(a, b);
	cout<<"Sum = "<<cob.getresult()<<"\n";
	cob.subnumber(a, b);
	cout<<"Subtract = "<<cob.getresult()<<"\n";
	cob.mulnumber(a, b);
	cout<<"Multiply = "<<cob.getresult()<<"\n";
	cob.divnumber(a, b);
	cout<<"Divide = "<<cob.getresult()<<"\n";
	getch();
}
