#include <iostream>

using namespace std;

int main()
{
    int num,temp,rev,dig;
    cout<<"Enter the digit:";
    cin>>num;
    temp=num;

    while(num>0)
    {
        dig = num%10;
        rev = rev*10+dig;
        num = num/10;
    }

    if (rev == temp)
    {
        cout<<"Entered digit is palindrome";
    }
    else
        cout<<"Entered digit isn't a palindrome";
}
