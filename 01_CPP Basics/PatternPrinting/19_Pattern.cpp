/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/


#include<iostream>
using namespace std;

int main(){
    int space=0;
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    space=2*(5-1);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
    return 0;
}