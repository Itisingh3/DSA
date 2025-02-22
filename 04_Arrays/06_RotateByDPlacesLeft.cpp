#include<bits/stdc++.h>
using namespace std;

// For Rotating the Elements to left
// Approach 1
/*
Step 1: Copy the first k elements into the temp array.

Step 2: Shift n-k elements from last by k position to the left

Step 3: Copy the elements into the main array from the temp array.
*/
/*
void Rotatetoleft(int arr[],int n,int k){
    if(k>n)return ;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }
}
*/
// Approach 2
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void Rotatetoleft(int arr[],int n, int k){
    // Reverse first k elements
    Reverse(arr,0,k-1);
    // Reverse first n-k elements
    Reverse(arr,k,n-1);
    // Reverse whole array
    Reverse(arr,0,n-1);

}




int main(){
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    Rotatetoleft(arr, n, k);

    cout << "After Rotating the elements to " << endl;
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
}