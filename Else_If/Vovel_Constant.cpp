#include<iostream>
using namespace std;
int main(){
    char c;
    int lovercase_vowel, uppercase_vowel;
    cout<<"Enter Alphabe :";
    cin>>c;
    lovercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lovercase_vowel||uppercase_vowel){
        cout<<"Alphabet is vowel";
    }
    else{
        cout<<"Alphabet is Constant";
    }


}