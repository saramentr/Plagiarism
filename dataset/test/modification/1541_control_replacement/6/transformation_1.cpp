#include <bits\stdc++.h>
using namespace std;

int pairs(long long arr[], int n)
{
    int count = 0;
    {
    int i = 1;
    while (i <= n) {
        {
        int j = arr[i] - i;
        while (j <= n) {
            if (j >= 0){
                if (arr[i] * arr[j] == i + j && i < j)
                    count++;
            }
        	j += arr[i]; 
        
        }}
    	i++; 
    
    }}
    return count;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long arr[n + 1];
        {
        int i = 1;
        while (i <= n) {
            cin >> arr[i];
        	i++; 
        
        }}
        cout << pairs(arr, n) << endl;
    }
    return 0;
}