#include <iostream>

using namespace std;

class food
{
private:
    int x,y;
public:
    food(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

void candy()
{
    cout<<x<<endl;
}
void pasta()
{
    cout<<y;
}
};

int main()
{
    food obj(3,5);
    obj.candy();
    obj.pasta();
}
