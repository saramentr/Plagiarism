#include<bits/stdc++.h>
using namespace std;


typedef long long l1;
typedef vector<int> vi;
typedef vector<l1> vl;
#define pi pair<int,int>
#define pl pair<l1,l1>
#define ump unordered_map
#define f first
#define s second


#define fir first
#define sec second
#define pushb push_back
#define popb pop_back
#define fli(i,a,b) for(int i=a;i<b;i++)
#define fld(i,a,b) for(int i=a;i>b;i--)
#define endl "\n"
#define pa(arr,l) {fli(i,0,l){cerr<<arr[i]<<" ";}cerr<<endl;}
#define pm(arr,l,r) fli(i,0,l){fli(j,0,r){cerr<<arr[i][j]<<" ";}cerr<<endl;}
#define db3(a,b,c) {cerr<<a<<" "<<b<<" "<<c<<endl;}
#define db2(a,b) {cerr<<a<<" "<<b<<endl;}
#define db(a) {cerr<<a<<endl;}
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min((a,b),(c,d))


void solution(){
    l1 n;
    cin>>n;
    cout<<floor(sqrt(n)) + floor(cbrt(n)) - floor(cbrt(floor(sqrt(n))))<<endl;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    
    
    
    int T;
    cin>>T;
    fli(t,0,T)
    {
        solution();
    }

    return 0;
}