#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n!=1 && n<4){
		cout<<"NO SOLUTION";
	}
	else{
		for(long long i=2;i<=n+1/2;i=i+2){
			cout<<i<<" ";
		}
		for(long long i=1;i<=n+1/2;i=i+2){
			cout<<i<<" ";
		}
	}
}

