#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            if(i!=n/i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"Yes:";
        return 0;
    }
    cout<<"No";
    return 0;
}