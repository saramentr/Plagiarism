
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s1;cin>>s1;
        string s2;
        cin>>s2;
        vector<pair<long long, long long> > v1;
        long long j=0;
        long long one=0;
        long long zero=0;
        for(long long i=0;i<n;i++)/* 'for' inside */
        {
            /* 'if' begin */
            if(s1[i]=='0') /* 'if' inside */
            zero++;
            else one++;
            
            /* 'if' begin */
            if(zero==one)/* 'if' inside */
            {
                v1.push_back({j,i});
                j=i+1;
            };
        };
        for(auto i : v1){
            long long st=i.first;
            long long end=i.second;
            /* 'if' begin */
            if(s1[st]==s2[st]) /* 'if' inside */
            continue;
            else{
                for(long long i=st;i<=end;i++) 
                /* 'for' inside */
                /* 'if' begin */
                if(s1[i]=='0') /* 'if' inside */
                s1[i]='1';
                else s1[i]='0';
            };
        };
        /* 'if' begin */
        if(s1==s2) /* 'if' inside */
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}