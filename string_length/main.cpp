#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Manoj";
    int length = 0;
    while(name[length] != '\0')
    {
        length++;
    }
    cout<<length;
}
