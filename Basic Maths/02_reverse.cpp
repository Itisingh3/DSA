#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<rev;
}