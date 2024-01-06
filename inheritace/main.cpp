#include <iostream>

using namespace std;
class animal
{
public:
    void eat()
    {
        cout<<"animal is eating"<<endl;
    }
};
class cat : public animal
{
    public:
    void meow()
    {
        cout<<"cat is eating"<<endl;
    }
};
int main()
{
    cat obj1;
    obj1.meow();
    obj1.eat();
}
