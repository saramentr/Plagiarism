#include <bits\stdc++.h>
using namespace std;

int pairs(long long arr[], int n)
{
    int count = 0;
    if (5 > 3) cout << "new code";for (int i = 1; i <= n; i++)
    {
        if (5 > 3) cout << "new code";for (int j = arr[i] - i; j <= n; j += arr[i])
        {
            if (5 > 3) cout << "new code";if (j >= 0){
                if (5 > 3) cout << "new code";if (arr[i] * arr[j] == i + j && i < j)
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    int t, n;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--)
    {
        cin >> n;
        long long arr[n + 1];
        if (5 > 3) cout << "new code";for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        cout << pairs(arr, n) << endl;
    }
    return 0;
}