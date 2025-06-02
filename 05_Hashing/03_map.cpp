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
	map<int,int>mp;
	for(int i=0;i<n;i++){
	    mp[arr[i]]++;
	}
	cout<<"Enter the size of elements of whom you the want the count"<<endl;
	int q;
	cin>>q;
	while(q--){
	    cout<<"Enter the element"<<endl;
	    int number;
	    cin>>number;
	    cout<<"The count of the "<<number<<" is "<<mp[number]<<endl;
	}
}
