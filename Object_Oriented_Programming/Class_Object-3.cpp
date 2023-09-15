#include <iostream>
#include <vector>
using namespace std;

class StudentData {
public:
    int id;
    string name;
    string gender;
    int printdata(){
    cout<<"\n";
    cout<<"Your Name: ";
    cout<<name<<endl;
    cout<<"Your Id:";
    cout<<id<<endl;
    cout<<"Your Gender:";
    cout<<gender<<endl<<endl;
    }
};

int main() {
    int n;
    cout<<"Enter Data Limit"<<endl;
    cin>>n;
  StudentData arr[n];
  for (int i = 0; i < n; i++)
  {
    cout<<"Enter Name: ";
    cin>>arr[i].name;
    cout<<"Enter Id:";
    cin>>arr[i].id;
    cout<<"Enter Gender:";
    cin>>arr[i].gender;
  }
  for (int i = 0; i < n; i++)
  {
    arr[i].printdata();
  }
  
  return 0;
}