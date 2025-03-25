#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int main(){
    int n=12;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    vector<int>temp;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            temp.push_back(i);
            if(i!=(n/i)){
                temp.push_back(n/i);
            }
        }
    }
    for(int i:temp){
        cout<<i<<" ";
    }
    return 0;

}