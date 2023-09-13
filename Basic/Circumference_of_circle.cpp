// Find the Circumferene and Area of the circle

#include<iostream>
using namespace std;
#define PI 3.1427
int main(){
 int r;
 float cir, area;
 cout<<"\nENTER THE RADIUS OF THE CIRCLE : ";
 cin>>r;
 cir=2*PI*r;
 area=PI*r*r;
 cout<<"\nCIRCUMFERENCE OF THE CIRCLE IS : "<<cir;
 cout<<"\n AREA OF THE CIRCLE IS : "<<area;


}