#include <iostream>

using namespace std;

int main()
{
    int num,armstrong,c,r;
    cout<<"Enter the number:";
    cin>>num;
    c=num;
    armstrong = 0;

    while(num > 0)
    {
        r=num%10;
        armstrong = (r*r*r) + armstrong;
        num = num/10;
    }
    if (c == armstrong)
    {
        cout<<"Armstrong";
    }
    else
        cout<<"not Armstrong";
}
