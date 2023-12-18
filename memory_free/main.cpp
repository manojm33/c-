#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int (32);
    if (ptr == NULL)
    {
        cout<<"Memory is not sufficient";
    }
    else
    {
        delete ptr;
        cout<<"memory freed";
    }
}
