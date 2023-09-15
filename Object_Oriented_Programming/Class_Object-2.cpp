#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string gender;
};
int main()
 { 
  student object;
  object.name="Aditya";
  object.age=20;
  object.gender="Male";
  cout<<"Name is : "<<object.name<<endl;
  cout<<"Name is : "<<object.age<<endl;
  cout<<"Name is : "<<object.gender<<endl;


 return 0;
 }