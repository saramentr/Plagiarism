#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+10;
const int mod=1e9+7;
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
inline int gcd(int x,int y){
	if(y==0)return x;
	return gcd(y,x%y);
}

int T,n,m,a[maxn],f[maxn][20];
signed main(){
	T=read();
	while(T--){
		n=read();
		{
		int i=1;
		while (i<=n) {
			a[i]=read();
			i++; 
			
			}}
		if(n==1){
			puts("1");
			continue;
		}
		{
		int i=1;
		while (i<n) {
			a[i]=abs(a[i]-a[i+1]);
			i++; 
			
			}}
		{
		int i=1;
		while (i<n) {
			f[i][0]=a[i];
			i++; 
			
			}}
		{
		int i=1;
		while (i<20) {
			{
			int j=1;
			while (j<n) {
				if(j+(1<<i)<=n)
					f[j][i]=gcd(f[j][i-1],f[j+(1<<i-1)][i-1]);}
					j++; 
					
					}
					i++; 
					
					}}
		int ans=1;
		{
		int i=1;
		while (i<n) {
			int pos=i,now=a[i];
			if(now==1)i++; continue;
			{
			int j=19;
			while (~j) {
				if(pos+(1<<j)<n&&gcd(now,f[pos+1][j])>1)
					now=gcd(now,f[pos+1][j]),pos+=(1<<j);
					--j; 
					
					}}
			ans=max(ans,pos-i+2);
			i++; 
		
		}}
		printf("%d\n",ans);
	}
    return 0;
}