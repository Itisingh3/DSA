#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>divisors;
    for(int i=1;i<=sqrt(n);i++){
        if((n%i) == 0){
            divisors.push_back(i);
            if(i != (n/i)){
                divisors.push_back(n/i);
            }
        }
    }
    for(int i:divisors){
        cout<<i<<" ";
    }
    return 0;

}