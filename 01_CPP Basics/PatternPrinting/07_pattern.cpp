/*

    *
   ***
  *****
 *******  
*********

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    for(int i=1;i<=5;i++){
        for(int space=1;space<=5-i;space++){
            cout<<" ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}