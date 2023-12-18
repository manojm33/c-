#include <iostream>

using namespace std;

int main()
{
    int a[6]={2,5,7,6,8,1};
    int i,sum=0;
    for(i=0;i<6;i++)
    {
    if (a[i] % 2 == 1)
        {
        sum=sum+a[i];
        }
    }
    cout<<sum;
}
