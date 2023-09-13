#include<iostream>
using namespace std;
#define pi 3.14
int main(){
    int r;
    float  cir, vol;
    cout<<"\n\nENTER RADIUS OF THE SPHERE : ";
    cin>>r;
    cir=4*pi*r*r;
    vol=4/3*pi*r*r*r;
    cout<<"Circumference : "<<cir<<endl;
    cout<<"Volume : "<<vol;
}