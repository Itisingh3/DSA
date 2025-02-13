/*

1
01
101
0101

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int flag;
    for(int i=1;i<=n;i++){
        if(i%2){flag=1;}
        else flag=0;
        for(int j=1;j<=i;j++){
            cout<<flag;
            flag=!flag;
        }
        cout<<endl;
    }
}