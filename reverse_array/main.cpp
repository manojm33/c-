#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};

    cout<<"Array before reverse:";
    for( int i=0;i<5;i++)
    {
        cout<<a[i]<<' ';
    }
    int s;
    int e;
    for( s=0,e=4; s<e; s++,e--)
    {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
    }
    for(int i=0;i<5;++i)
    {
        cout<<':'<<a[i];
    }
}
