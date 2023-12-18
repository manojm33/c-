#include <iostream>

using namespace std;

class animal
{
public:
    int x = 6;
    int fun1()
    {
        cout<<x;
    }

};
int main()
{
    animal obj;
    obj.fun1();
}
