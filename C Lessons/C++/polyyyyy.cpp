#include<iostream>

using namespace std;

class A{
	
	protected:
		int height,breadth;
		public:
			void set_values(int a,int b){
				
				height=a;
				breadth=b;
			}
			int area(){
				return height*breadth;
			}
};

class B:public A{
	
	public:
	
};

class C:public A{
	public:
		int area(){
			return height*breadth/2;
		}
};

int main(){
	
	B ob;
	C oc;
	ob.set_values(2,8);
	oc.set_values(4,4);
	cout<<ob.area()<<endl;
	cout<<oc.area();
	return 0;
	
}
