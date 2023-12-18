#include<iostream>

using namespace std;

int main()
{
   int a[5] = {5,4,6,17,98};
   int small = a[0];
   for ( int i=1;i<5;i++)
   {
       if(a[i]<small)
       {
           small = a[i];
       }
   }
   cout<<small;
   return 0;
}
