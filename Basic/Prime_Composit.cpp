// program to check the given number is prime or composit
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number to check  :";
    bool flag=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"Composit\n";
            flag==1;
            break;
        }
         if(flag==0){
            cout<<"prime";
            break;
        }
    }
   
}