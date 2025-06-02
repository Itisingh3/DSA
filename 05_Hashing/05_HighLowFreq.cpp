#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map <int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int maxfreq=0,minfreq=n;
    int maxelem=0,minelem=0;
    for(auto it:mp){
        int count=it.second;
        int element=it.first;
        if(count>maxfreq){
            maxfreq=count;
            maxelem=element;
        }
        if(count<minfreq){
            minfreq=count;
            minelem=element;
        }
    }
    cout<<"Highest frequency element is "<<maxelem<<endl;
    cout<<"Lowest frequency element is "<<minelem<<endl;
    
    return 0;
}
