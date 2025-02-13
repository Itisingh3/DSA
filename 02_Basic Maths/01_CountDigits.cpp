#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    cout<<count;
}