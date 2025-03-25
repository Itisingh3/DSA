/*

    A
   ABA
  ABCBA
 ABCDCBA

*/




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=(n-i);space++){
            cout<<" ";
        }
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j=1;j<i;j++){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}