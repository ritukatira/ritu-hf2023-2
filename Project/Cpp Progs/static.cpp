#include<iostream>
using namespace std;
void test()
{
   //static int a=12;//if use static output will be 12 and next time 13 
   int a=12;//if we dont use static keyword output will be 12 both time
   cout<<"value of static variable a is "<<a<<endl;
   a++;
}

int main()
{
    test();
    test();
    return 0;
}
