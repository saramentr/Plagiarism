#include <bits/stdc++.h>
#include<ext/rope>
#define pb push_back
#define debug(x) cerr<<#x<<'='<<x<<'\n'
#define debugg(x,y) cerr<<#x<<'='<<x<<','<<#y<<'='<<y<<'\n' 
#define FOR(a,b,c) for(int a=(b),a##_end=(c);a<=a##_end;++a)
#define ROF(a,b,c) for(int a=(b),a##_end=(c);a>=a##_end;--a)
#define FASTIO() cin.sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
using namespace std;
using namespace __gnu_cxx;
typedef long long ll;
typedef pair<int,int> PII;
const int N = 410 ,M = 1000010,mod = 998244353;const double eps = 1e-9;
ll qmi(ll,ll);
template<typename T>inline bool chkmin(T &x,const T &y){return y<x?x=y,1:0;}
template<typename T>inline bool chkmax(T &x,const T &y){return x<y?x=y,1:0;}
template <typename T> void inline read(T &x) {
    int f = 1; x = 0; char s = getchar();
    while (s < '0' || s > '9') { if (s == '-') f = -1; s = getchar(); }
    while (s <= '9' && s >= '0') x = x * 10 + (s ^ 48), s = getchar();
    x *= f;
}
int n,m,d;
int a[N],b[N];
int s[N][N],sum[N];
int A[N][N];
int get(int x1,int y1,int x2,int y2,int f)
{
	int ans = s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
	if(f) ans = (x2-x1+1)*(y2-y1+1)-ans;
	return ans;
}
signed main()
{
	int cas;read(cas);
	while(cas--)
	{
		read(n);read(m);
		char c;
		{
		int i=1;
		while (i<=n) {
			{
			int j=1;
			while (j<=m) {
				scanf(" %c",&c);
				if(c=='1') s[i][j] = 1;
				else s[i][j] = 0;	
				j++; 
			
			}}
			i++; 
		
		}}
		memcpy(A,s,sizeof A);
		{
		int i=1;
		while (i<=n) {
			{
			int j=1;
			while (j<=m) {
				s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];}
				j++; 
				
				}
				i++; 
				
				}}
		int res = 2e9;
		{
		int x1=1;
		while (x1<=n) {
			{
			int x2=x1+4;
			while (x2<=n) {
				{
				int y1=1;
				while (y1<=m) {
					a[y1] = get(x1+1,y1,x2-1,y1,1);//ç«ççè¾¹ç1
					b[y1] = get(x1+1,y1,x2-1,y1,0)+(A[x1][y1]!=1) + (A[x2][y1]!=1);
					b[y1]+=b[y1-1];

					y1++; 
				
				}}
				int pre = 2e9;
				{
				int k=4;
				while (k<=m) {
					pre = min(pre,a[k-3]-b[k-3]);
					res = min(res,a[k]+pre+b[k-1]);
					k++; 
				
				}}
				x2++; 
			
			}}}
		cout<<res<<'\n';
	}    
    return 0;
}

ll qmi(ll a,ll b) {ll res=1;a%=mod;  while (b) {if(b&1)res=res*a%mod;a=a*a%mod;	b>>=1; 
}return res;}



