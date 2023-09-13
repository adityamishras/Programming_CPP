#include <iostream>  //including input output stream header file
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cout << i << endl;
        if (i == 3)
        {
            break;              // when conditon is i == 3 then program is end this is the use of break keyward 
        }
    }
}