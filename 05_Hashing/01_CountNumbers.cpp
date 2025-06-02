#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cout<<"Enter the element of the array"<<endl;
	    cin>>arr[i];
	}
	int hash[30]={0};
	for(int i=0;i<n;i++){
	    hash[arr[i]]+=1;
	}
	cout<<"Enter the size of elements of whom you the want the count"<<endl;
	int q;
	cin>>q;
	while(q--){
	    cout<<"Enter the element"<<endl;
	    int number;
	    cin>>number;
	    cout<<"The count of the "<<number<<" is "<<hash[number]<<endl;
	}
    return 0;
}
