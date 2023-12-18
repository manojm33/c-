#include <iostream>

using namespace std;

int main()
{
   int a[5] = {5,4,6,17,98};
   int largest = a[0];
   for ( int i=1;i<5;i++)
   {
       if(a[i]>largest)
       {
           largest = a[i];
       }
   }
   cout<<largest;
}
