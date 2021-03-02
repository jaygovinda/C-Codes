#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,p,q,r,t,n_org,x,y;
	cout<<"Enter the number upto which you want to calculate\n\n";
	cin>>t;
	n_org=0;
	cout<<"n\tp\tq\tr\ty\tx\t(y-x)\n\n";
	while(t--){
		n_org+=1;
		n=n_org;
		p=1;q=0;r=1;
		while(n!=1){
			if(n%2==0){
				r=2*r;
				n=n/2;
			}
			else{
				p=3*p;
				q=3*q+r;
				n=3*n+1;
			}
		}
		x=log(p)/log(3);
		y=log(r)/log(2);
		cout<<n_org<<"\t"<<p<<"\t"<<q<<"\t"<<r<<"\t"<<y<<"\t"<<x<<"\t "<<y-x<<"\n\n";
		//cout<<"PROOF:-\n"<<(n_org*p+q-r)<<"\n";
	}
}

