#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
vector<int> V[200007];
set<int> S;
LL n,t,k;
int main() {


   cin>>t;
   while(t--)
   {
      cin>>n>>k;k--;
      if(n%2)
      {
          LL kk=n/2,sum=k%n;
          sum+=k/kk;
          sum=sum%n+1;
          cout<<sum<<endl;
      }
      else cout<<k%n+1<<endl;
      
        
   }

	return 0;
}