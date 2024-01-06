#include <iostream>

using namespace std;
class fun
{
public:
    int a (int a, int b)
    {
        return a+b;
    }
    int a(int a, int b,int c)
    {
        return a*b*c;
    }
};

int main()
{
    fun obj;
    int sumtwo=obj.a(3,4);
    int multhree=obj.a(2,3,2);
    cout<<sumtwo<<endl<<multhree;
}
