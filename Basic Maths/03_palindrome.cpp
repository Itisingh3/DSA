#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int temp=n;
    int rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==temp){
        cout<<"Palindrome:";
    }
    else{
        cout<<"Not Palindrome: ";
    }
    return 0;
}