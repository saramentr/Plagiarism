#include <bits/stdc++.h> 
using namespace std;
#define ll long long
const ll N = 2e5+10 , MOD = 1e9+7 , INF = 1e16 ;
const double eps = 1e-7;


void test(int tc);
int main(){ 
	
	// freopen( "input.txt" , "r", stdin);
	// freopen ("myfile.txt","w",stdout);
	#ifdef ONLINE_JUDGE
		ios_base::sync_with_stdio(0);
		cin.tie(0);
	#endif  
		int t = 1 , tc =1  ;	
		cin>>t;
		while( t-- ) test(tc++) ;
}

void test(int tc){	

	ll n ;
	cin>>n;
	ll all = ( n*(n-1) )/2 ;
	ll rem = all%n ;
	ll each = all/n ;
	vector< ll >ans;

	for( int i=1 ; i<=n ; i++ ){
		for( int j=i+1 , x = 0 ;  j<= n ; j++ , x++ ){
				if( x < each )
					cout<<1<<" ";
				else if( x == each && ( n-1 )&1 )
					cout<<"0 ";
				else cout<<"-1 ";
		}
	}

	cout<<"\n";
}