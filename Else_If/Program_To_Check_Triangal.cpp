
// PROGRAM TO CHECK TRIANGLE IS SCALEN, ISOSCALES AND EQUILATERAL
#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout<<"Enter The Sides Of Triangle: \n";
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3){
        cout<<"Triangle is Equilateral";
    }
    else if(side1==side2||side2==side3||side3==side1){
        cout<<"Triangle is Isocales";
    }
    else{
        cout<<"Triangle is Scalen";
    }
}
