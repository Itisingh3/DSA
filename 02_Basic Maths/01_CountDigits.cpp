#include<iostream>
#include<math>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;



    // 1st approach
    // int count=0;
    // while(n){
    //     count++;
    //     n/=10;
    // }
    // cout<<count;


    // 2nd approach
    int cnt = (int)(log10(n)+1);
    cout<<cnt;
    
}