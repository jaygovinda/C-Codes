#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,ans=0;
	vector<int> v;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=1;i<n;i++){
		if(v[i]<v[i-1]){
			ans+=(v[i-1]-v[i]);
		}
	}
	cout<<ans;
}
