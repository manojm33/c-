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
class dog : public cat
{
    public:
    void bark()
    {
        cout<<"dog is barking"<<endl;
    }
};
int main()
{
    dog obj;
    cat obj1;
    obj1.eat();
    obj.bark();
    obj.meow();
}
