#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define ri int
/*

åªéè¦ç¥éä¸æ¡è¾¹ä¸çæ»ç¹æ°  

S=n+s/2+1  

n=S-1-s/2  
sæ¯å¯ä»¥ç®åºæ¥çï¼é®é¢æ¯Sæä¹å  
ä¸æ å¨æ¯å¥æ°ãä¸æ å¨æ¯å¶æ°çæåµä¸æ ·  
è¿ç¨åç§¯ï¼  

S=(x2-x1,y2-y1) X (x3-x1 , y3-y1)  
=(x2-x1)(y3-y1) - (x3-x1) (y2-y1)
åªè¦ç¥éè¿ä¸ªä¸è¥¿çå¥å¶æ§å°±å¯ä»¥äº  

*/
int gcd(int x,int y){
    while (y) {
    ;
    x%=y,swap(x,y); 
    }
    return x;
}
ll cnt[4][4][4],g[4][4];
int n;
int Mod(int x){
    while(x<0) x+=4;
    x&=3;
    return x;
}
int dec(int x,int y){return (x-=y)<0?x+4:x;}
int mul(int x,int y){return x*y&3;}
struct node
{
    int x,y;
}a[6005];
ll ans;
int main(){
    scanf("%d",&n);
    {
    ri i=0;
    while (i<4) {
    {
    ri j=0;
    while (j<4) {
    g[i][j]=gcd(i,j);}
    ++j; 
    
    }
    ++i; 
    
    }}
    {
    ri i=1;
    while (i<=n) {
    scanf("%d%d",&a[i].x,&a[i].y);
    ++i; 
    
    }}
    {
    ri i=1;
    while (i<=n) {
        memset(cnt,0,sizeof(cnt));
        {
        ri j=1;
        while (j<=n) {
            if(i!=j) cnt[a[j].x&3][a[j].y&3][gcd(abs(a[i].x-a[j].x),abs(a[i].y-a[j].y))&3]++;
            ++j; 
            
            }}
        {
        ri x=0;
        while (x<4) {
        {
        ri y=0;
        while (y<4) {
        {
        ri j=0;
        while (j<4) {
        {
        ri p=0;
        while (p<4) {
        {
        ri q=0;
        while (q<4) {
        {
        ri k=0;
        while (k<4) {
            if((j^k)&1) ++i; ++x; ++y; ++j; ++p; ++q; ++k; continue;if((dec(x,p)&1)||(dec(y,q)&1)) ++i; ++x; ++y; ++j; ++p; ++q; ++k; continue;
            int S=dec( mul( dec(x,a[i].x&3) , dec(q,a[i].y&3) ) , mul( dec(p,a[i].x&3) , dec(y,a[i].y&3) ) ),o=0;
            if(S&1) ++i; ++x; ++y; ++j; ++p; ++q; ++k; continue;
            o=(S>>1&1)^1;
            int u=Mod(j+k+g[dec(x,p)][dec(y,q)])>>1&1;
            if(o^u){
                ll res=1;
                res*=cnt[x][y][j]--,res*=cnt[p][q][k]--;
                if(!(j&1)) ans+=res;
                else ans+=res*3;
                cnt[x][y][j]++,cnt[p][q][k]++;
            }
        	++k; 
        
        }}
    	++i; 
    
    }}
    // assert(ans%6==0)
    printf("%lld",ans/6);
}