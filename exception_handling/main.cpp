#include <iostream>

using namespace std;

int main()
{
    try
    {
    int numerator, denominator, result;

    cout<<"Enter the numerator";
    cin>>numerator;

    cout<<"Enter the denominator";
    cin>>denominator;

    if (denominator == 0)
    {
        throw "Error: Division by zero";
    }

    result = numerator / denominator;

    cout<<"Result: "<< result <<endl;
    }
    catch (const char* error)
    {
        cerr<<error<<endl;
    } catch (...)
    {
        cerr<<"An unexpected error occured."<< endl;
    }

    return 0;
}
