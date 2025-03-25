/*

1      1
12    21
123  321
12344321

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int spaces=2*(n-1);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int space=i;space<=2*(n-1);i++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        spaces-=2;
    }
    return 0;
}