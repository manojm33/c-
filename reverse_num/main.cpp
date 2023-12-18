#include <iostream>

using namespace std;

int main()
{
   int num,r;
   cout<<"Enter the digit to be reversed:";
   cin>>num;
   temp = num;
   while(num > 0)
   {
       r = num%10;
       num = num / 10;

       cout<<r;
   }
}
