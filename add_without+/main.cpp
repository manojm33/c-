#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;

    while (b != 0)
    {
        a++;
        b--;
    }
    cout<<a;
}
