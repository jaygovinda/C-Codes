#include<bits/stdc++.h>
using namespace std;
int gcd(int A, int B){
	if(B==0) return A;
	
	return gcd(B, A%B);
}
main(){
	int A, B;
	cout<<"Enter 2 numbers to find GCD\n";
	cin>>A>>B;
	/*cout<<"GCD = "<<__gcd(A,B);*/
	cout<<"GCD = "<< gcd(A,B);
}

