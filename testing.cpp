#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(3);
	s.insert(4);
	s.insert(45);
	s.insert(8);
	s.insert(10);
	int x=1;
	set<int>::iterator it = s.lower_bound(x);
	if(it==s.begin()){
		cout<<*it;
	}
	else if(it==s.end()){
		it--;
		cout<<*it;
	}
	else{
		a=*it;
		it--;
		b=*it;
		if(a-x<x-b){
			cout<<a;
		}
		else{
			cout<<b;
		}
	}
	return 0;
}
