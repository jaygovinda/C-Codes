#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	long long ans=1,temp=1;
	for(long long i=1;i<s.size();i++){
		if(s[i] == s[i-1]){
			++temp;
		}
		else{
			ans=max(ans,temp);
			temp=1;	
		}
		ans=max(ans,temp);
	}
	cout<<ans;
}
