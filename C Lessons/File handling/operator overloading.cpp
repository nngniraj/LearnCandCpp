#include <iostream>
using namespace std;

class Test
{
   private:
      int a,b;

   public:
       Test(): a(5),b(6){}

       void operator +() 
       { 
          a+=b; 
       }
       void Display() { cout<<"Count: "<<a; }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    +t;    
    t.Display();
    return 0;
}
