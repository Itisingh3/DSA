#include<bits/stdc++.h>
using namespace std;


// For Rotating the Elements to right
// Approach 1
/*
Step 1: Copy the last k elements into the temp array.

Step 2: Shift n-k elements from the beginning by k position to the right

Step 3: Copy the elements into the main array from the temp array.
*/
/*
void Rotatetoright(int arr[],int n, int k){
    if(k>n){
        return ;
    }
    int temp[k];
    for(int i=n-k;i<n;i++){
        temp[i-n+k]=arr[i];
    }
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    
}
*/




// approach 2
void Reverse(int arr[],int start, int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void Rotatetoright(int arr[],int n, int k){
    // Reverse first n-k elements
    Reverse(arr,0,n-k-1);
    // reverse last k elements
    Reverse(arr,n-k,n-1);
    // reverse whole array
    Reverse(arr,0,n-1);
}
int main(){
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    Rotatetoright(arr, n, k);

    cout << "After Rotating the elements to " << endl;
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
}