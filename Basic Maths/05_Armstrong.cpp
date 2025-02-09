#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int temp=n;
    int count=0;
    while(n){
        count++;
        n/=10;
   }
   int sum=0;
   n=temp;
   while(n){
    sum+=pow(n%10,count);
    n/=10;
   }
   if(sum==temp){
    cout<<"Yes:";
    return 0;
   }
   cout<<"No:";
   return 0;
}