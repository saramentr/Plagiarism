#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,k;cin>>a>>b>>k;

	if ((b-1)+(a-1)*b ==k){
		cout<<"YES"<<"\n";
	} else{
		cout<<"NO"<<"\n";
	}
	//cout<<(b-1)+(a-1)*b<<"\n";
	return;
}
int main(){
	int t; cin>>t;

	for (int i=0; i<t; i++){
		solve();
	}
	return 0;
}