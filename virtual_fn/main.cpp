#include <iostream>

using namespace std;

class shape
{
public:
    virtual void draw() const
    {
        cout<<"Drawing a shape"<<endl;
    }
};

class circle : public shape
{
public:
    void draw() const override
    {
        cout<<"Drawing a circle"<<endl;
    }
};

class square : public shape
{
public:
    void draw() const override
    {
        cout<< "Drawing a square"<<endl;
    }
};

int main()
{
    shape* shape1 = new circle();
    shape* shape2 = new square();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;
}
