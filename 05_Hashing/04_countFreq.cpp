#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map <int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" ---> "<<it.second<<endl;
    }
    return 0;
}
