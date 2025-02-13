/*

AAAA
BBBB
CCC
DD
E

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char ch='A';
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}