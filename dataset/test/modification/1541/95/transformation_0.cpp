#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		if(n%2==0){
			for(int i=1;i<=n;i+=2) cout<<i+1<<" "<<i<<" ";
			cout<<endl;
		}
		else{
			cout<<"3 1 2 ";
			for(int i=4;i<=n;i+=2) cout<<i+1<<" "<<i<<" ";
			cout<<endl;
		}
	}
}