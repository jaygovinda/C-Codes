#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,y,x,ans,m;
	cin>>t;
	while(t--){
		cin>>y>>x;
		/*if(y>=x){
			if(y%2==0) ans = pow(y,2)-x+1;
			else ans = pow(y-1,2)+x;
		}
		else{
			if(x%2==0) ans = pow(x-1,2)+y;
			else ans = pow(x,2)-y+1;
		}*/
		m = max(x,y);
		ans=m*(m-1)+1+pow(-1,m)*(x-y);
		cout<<ans<<"\n";
	}
}

