// Program to illustrate the working of objects and class in C++ Programming
#include <iostream>
using namespace std;

class Test
{
   // private:
        int data1;
        float data2;

    public:
       
       void a()
       {
          data1 = 3;
          cout << "Number: " << data1;
        }

       float b()
       {	
           cout << "\nEnter data: ";
           cin >> data2;
           return data2;
        }
};

 int main()
 {
      Test o1, o2;
      float x;

      o1.a();
      x=o2.b();

      cout << "You entered " <<x;
      return 0;
 }
