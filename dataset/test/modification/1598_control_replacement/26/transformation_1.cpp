#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
#define MODVAL 1000000007
#define read(vec) for(auto &x:vec){cin>>x;}
#define each(vec) for(auto x: vec){cout<<x<<" ";}cout<<"\n";
#define sortasc(vec) sort(vec.begin(),vec.end());
#define sortdes(vec) sort(vec.rbegin(),vec.rend());
#define all(x) x.begin(),x.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))


typedef unsigned long long ll;
int countDistinct(string s) //to count Distinct character in a string
{ 

    unordered_map<char, int> m; 

    {
    int i = 0;
    for ( ; i < s.length(); ) 
{ 
        m[s[i]]++; 
    	i++; 
    
    }} 

    return m.size(); 
} 
void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
  
    number = 0;
  
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
  
        // extract the next character from the buffer
        c = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for ( ; (c>47 && c<58); ) 
{
        number = number *10 + c - 48;
        c=getchar(); 
        }
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}



// Function Call
int main()
{
//     vector<int> a(n);
//   for (int &x : a) { 
//     cin >> x;
//   }

    fastio;
    
    cin.tie(0);
    ll t;cin>>t;
    for ( ; t--; ) 
{
        ll n;cin>>n;
        string a,b;
        cin>>a>>b;
        string ans="YES";
        {
        ll i=0;
        for ( ; i<n; ) 
{
            if(a[i]=='1' && b[i]=='1'){ans ="NO";break;}
            i++; 
            
            }}
        cout<<ans;
        cout<<'\n';
    }
    
    return 0;
}