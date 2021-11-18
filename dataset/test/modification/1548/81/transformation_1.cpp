
 

 
#include<bits/stdc++.h>
#define int         long long
#define double      long double
#define pb          emplace_back
#define pf          emplace_front
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define rall(a)     (a).rbegin(),(a).rend()
#define x           first
#define y           second
#define endl        '\n'
#define hell        998244353 
#define PI          3.141592653589
#define tezz        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MAX         2000000000000000000
#define M           1000000007
using namespace std;



int power(int x,int n){
    int result=1;
    while(n>0)
    {
        /* 'if' begin */
        if(n % 2 ==1)
            /* 'if' inside */
            result=(result * x) % M;
        x=(x*x)% M;
        n=n/2;
    }
    return result % M;
}

vi fact(3000005);

void build() {
    fact[0] = 1;
    for(int i=1; i<3000002; i++) /* 'for' inside */
    fact[i] = (fact[i - 1] * i) % M;
}

int ncr(int n, int r) {
    /* 'if' begin */
    if (fact[0] == 0) /* 'if' inside */
    build();

    /* 'if' begin */
    if (n < r) /* 'if' inside */
    return 0;

    int nr = fact[n];
    int dr = (fact[n - r] * fact[r]) % M;

    return (nr * power(dr, M - 2)) % M;
}
 
signed main()
{
    tezz

    int n, q;
    cin>>n>>q;

    vector<vi> dp(3 * n + 1, vi(3));

    dp[0][0] = dp[0][1] = dp[0][2] = n;

    int inv3 = power(3, M - 2);

    for(int i=1; i<=3 * n; i++) /* 'for' inside */
    {
        dp[i][0] = ((((ncr(3 * n, i + 1) - (2 * dp[i - 1][0]) % M + M) % M - dp[i - 1][1] + M) % M) * inv3) % M;
        dp[i][1] = (dp[i][0] + dp[i - 1][0]) % M;
        dp[i][2] = (dp[i][1] + dp[i - 1][1]) % M;
    }

    while(q--) {
        int x;
        cin>>x;

        cout<<(dp[x][0] + ncr(3 * n, x)) % M<<endl;
    }
}