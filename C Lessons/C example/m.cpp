#include<iostream>
using namespace std;
int main()
{
	int i,j;
	string fname;
	cout<<"Enter the value";
	cin>>j;
	for(i=1;i<=j;++i)
	{
		cout<<"Enter the name:";
		cin>>fname;//getline(cin,fname);
		cout<<i<<"."<<fname;
	}
}
