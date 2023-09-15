#include <iostream>  /*including header file*/
using namespace std;

class Student    /*Defining Class*/
{
public:             /*Making this class Public for accessing this class in main() function*/
    string name;    /*Defining class data-members*/
    int age;        /*Defining class data-members*/
    string gender;  /*Defining class data-members*/
};

int main()
{
    Student a;          /*Accessing these Class in main() function*/
    a.name = "Aditya";  /*adding data in variables or Data-members*/
    a.age = 18;         
    a.gender = "Male";

    cout << "Name is: " << a.name << endl; /*output data*/
    cout << "Age is: " << a.age << endl;
    cout << "Gender: " << a.gender << endl;
    cout<<"\n";
    Student b;
    b.name = "Golden";
    b.age = 18;
    b.gender = "Male";

    cout << "Name is: " << b.name << endl;
    cout << "Age is: " << b.age << endl;
    cout << "Gender: " << b.gender << endl<<endl;

    return 0;
}
