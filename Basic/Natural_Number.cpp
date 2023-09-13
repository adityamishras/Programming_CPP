// This program helps to find the Sum of First n natural numbers 
#include<iostream>
using namespace std;
int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    
}