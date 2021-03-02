#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=3;
	vector<int> permutation;
	for (int i = 1; i <=n; i++) {
		permutation.push_back(i);
		}
	do {
		cout<<"[";
		for(int i=0;i<n;i++){
			cout<<permutation[i]<<",";
		}
		cout<<"]\n";
	} while (next_permutation(permutation.begin(),permutation.end()));
}
