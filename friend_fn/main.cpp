#include <iostream>

using namespace std;

class a
{
private:
    int data;

public:
    a() : data(8) {}

    friend void display(const a& obj);
};

void display(const a& obj)
{
    cout<<"Friend function"<<obj.data<<endl;
}
int main()
{
    a obj1;
    display(obj1);
}
