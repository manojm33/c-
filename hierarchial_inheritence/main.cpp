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

class two : public one
{
public:
    void b()
    {
        cout<<"this is two"<<endl;
    };
};

class three : public one
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
    two obj1;
    obj.a();
    obj.c();
    obj1.b();
    obj1.a();
}
