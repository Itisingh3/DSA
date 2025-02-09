#include<iostream>
using namespace std;


// Naive Approach
/*
int main(){
    int n1=20;
    int n2=15;
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if((n1%i==0) && (n2%i==0) )gcd=i;
    }
    cout<<gcd;
    return 0;
}
*/





// Optimal Approach
// euclidean algorithm
int main(){
    int n1=20;
    int n2=15;
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else {
            n2=n2%n1;
        }
    }
    if(n1==0)cout<<n2;
    else cout<<n1;
    return 0;
}