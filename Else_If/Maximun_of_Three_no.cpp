#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Three Number : \n";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "1st number is Greater";
        }
        else
        {
            cout << "3rd is greater";
        }
    }
    else
    {
        if (b > c)
        {
            cout << " 2nd number is Greater";
        }
        else
        {
            cout << "3rd number is greater";
        }
    }
}
