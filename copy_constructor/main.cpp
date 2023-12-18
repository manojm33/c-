#include <iostream>

using namespace std;
class food
{
    int x,y;
public:
    food(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    food(const food&p1)
    {
        x = p1.x;
        y = p1.y;
    }


    int candy()
    {
        return x;
    }
    int pasta()
    {
        return y;
    }
};
int main()
{
    food p1(10,1);
    food p2 = p1;
    cout<<p2.candy()<<endl<<p2.pasta();
}
