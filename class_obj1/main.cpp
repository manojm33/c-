#include <iostream>

using namespace std;

class food
{
public:
    void biriyani()
    {
        cout<<"Spicy"<<endl;
    }
    void chocolate()
    {
        cout<<"Sweet";
    }
};
int main()
{
    food obj;
    obj.biriyani();
    obj.chocolate();
}
