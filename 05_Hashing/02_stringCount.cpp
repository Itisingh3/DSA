#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cout<<"Enter the string"<<endl;
	cin>>s;
	int hash[26]={0};
	for(int i=0;i<s.size();i++){
	    hash[s[i]-'a']++;
	}
	cout<<"Enter the size of elements of whom you the want the count"<<endl;
	int q;
	cin>>q;
	while(q--){
	    char c;
	    cout<<"Enter the letter of whom which you want the count"<<endl;
	    cin>>c;
	    cout<<"The count of the char "<<c<<" is "<<hash[c-'a']<<endl;
	}
    return 0;
}
