#include <iostream>

using namespace std;

int main()
{
    int a[5]={1,2,3,4,4};
    int sum=0,i;
    for(i=0;i<5;++i)
    {
        sum=sum+a[i];
    }
    cout<<sum;
}
