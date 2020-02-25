#include <iostream>

using namespace std;

double power(double base, int exp);

int main()
{
    cout<<"GitHub Test"<<endl;
    
    power(10.0, 2);
    power(5.0, 3);
    power(10.0, 1);
    power(10.0, 0);

    return 0;
}
//--
double power(double base, int exp)
{
    double result = 1.0;
    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    return result;
}
