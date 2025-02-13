#include<iostream>
using namespace std;
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
                j--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}