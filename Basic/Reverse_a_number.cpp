// Program to Reverse a Number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number for Reversing : ";
    cin>>n;
    int reverse=0;
    while (n>0)
    {
        int lastnumber=n%10;
        reverse= reverse*10+lastnumber;
        n=n/10;
    }
    cout<<"Reverse is : "<<reverse;
}