#include <iostream>

using namespace std;

int main()
{
  int number, fact=1;
  cout<<"enter the number";
  cin>>number;
  for(int i=1;i<=number;++i)
  {
      fact*=i;
  }
  cout<<fact;
}
