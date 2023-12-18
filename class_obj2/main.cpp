#include <iostream>

using namespace std;

class animal
{
public:
    void cat()
    {
        cout<<"meow"<<endl;
    }
    void dog();
};
void animal::dog()   /*outside the class*/
{
    cout<<"bark";
}

int main()
{
    animal obj;
    obj.cat();
    obj.dog();
}
