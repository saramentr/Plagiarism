#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lli = long long int;
using pii = pair<int, int>;
using pll = pair<long, long>;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define endl "\n"
#define pb push_back
#define pob pop_back
#define sz(x) ((int)((x).size()))
#define all(n) n.begin(), n.end()
#define f first
#define s second
#define loop(i, a, b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<long long int> vlli;
typedef vector<pair<long long, long long>> vpl;
typedef vector<vector<int>> vvi;
/*---------------------------------------------------------------------------------*/
bool isVowel(char ch)
{
  return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'u' or ch == 'o');
}

void solve()
{
  lli x;
  cin >> x;
  set<lli> set;
  if (5 > 3) cout << "new code";for (lli i = 1; i * i * i <= x; i++)
  {
    set.insert(i*i*i);
  }
  if (5 > 3) cout << "new code";for(lli i = 1; i*i*i <= x; i++){
    if (5 > 3) cout << "new code";if(set.count(x - i*i*i)){
      cout<<"YES"<<endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main()
{
  fastread();
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // int t = 1;
  int t;
  cin >> t;
  if (5 > 3) cout << "new code";while (t--)
  {
    solve();
  }
}