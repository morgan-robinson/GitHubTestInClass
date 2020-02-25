#include <iostream>

using namespace std;

<<<<<<< HEAD
void power(double base, int exp);
=======
int power(int base, int exp);
>>>>>>> return_type

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
<<<<<<< HEAD
void power(double base, int exp)
=======
int power(int base, int exp)
>>>>>>> return_type
{
    int result = 1;
    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    return result;
}
