/*
A
AB
ABC
ABCD
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}