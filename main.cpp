#include <iostream>

using namespace std;

void power(double base, int exp);

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
void power(double base, int exp)
{
    int result = 1;
    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    cout<<result<<endl;
}
