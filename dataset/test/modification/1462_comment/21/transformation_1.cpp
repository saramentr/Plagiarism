#include <iostream>
using namespace std;
int main(){
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        /* 'if' begin */
        if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
            /* 'if' inside */
            cout << "YES\n";
        else /* 'if' begin */
        if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
            /* 'if' inside */
            cout << "YES\n";
        else /* 'if' begin */
        if(s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            /* 'if' inside */
            cout << "YES\n";
        else /* 'if' begin */
        if(s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            /* 'if' inside */
            cout << "YES\n";
        else /* 'if' begin */
        if(s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            /* 'if' inside */
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
