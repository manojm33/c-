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

class four : public three
{
public:
    void d()
    {
        cout<<"this is four"<<endl;
    }
};

int main()
{
    four obj;
    obj.a();
    obj.b();
    obj.c();
    obj.d();
}
