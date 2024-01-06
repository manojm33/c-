#include <iostream>

using namespace std;
class one
{
public:
    void a()
    {
        cout<<"this is one"<<endl;
    }
};

class two
{
public:
    void b()
    {
        cout<<"this is two"<<endl;
    };
};

class three : public one, public two
{
public:
    void c()
    {
        cout<<"this is three"<<endl;
    }
};

int main()
{
    three obj;
    obj.a();
    obj.b();
    obj.c();
}
