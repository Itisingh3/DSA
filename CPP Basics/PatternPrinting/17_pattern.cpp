/*

    A
   ABC
  ABCDC
 ABCDEDC
ABCDEFEDC

*/




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        char ch='A';
        int point=(2*i+1)/2;
        for(int j=0;j<(2*i+1);j++){
            cout<<ch;
            if(j<=point)ch++;
            else ch--;
        }
        cout<<endl;
    }
}