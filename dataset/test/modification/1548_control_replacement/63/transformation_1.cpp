#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
const int mod = 1e9 + 7;

int n, q;
int dp[3 * N][3];
int silnia[3 * N];
int rev3;
int nr;

int fast_exp(int a, int x) {
	if (x == 0) {
		return 1;
	}
	if (x & 1) {
		return (long long) fast_exp(a, x - 1) * a % mod;
	}
	int res = fast_exp(a, x / 2);
	return (long long) res * res % mod;
}

int newton(int n1, int k1) {
	if (k1 < 0 || k1 > n1) {
		return 0;
	}
	return (long long) silnia[n1] * fast_exp((long long) silnia[k1] * silnia[n1 - k1] % mod, mod - 2) % mod;
}

void compute_silnia() {
	silnia[0] = 1;
	{
	int i = 1;
	for ( ; i <= 3 * n + 4; ) 
{
		silnia[i] = (long long) silnia[i - 1] * i % mod;
		i++; 
	
	}}
}

void compute_next() {
	nr++;
	dp[nr][0] = ((long long) newton(3 * n + 3, nr + 1) - 3 * (nr == 1) - (nr == 2) - 2 * dp[nr - 1][0] - dp[nr - 1][1] + 3LL * mod) * rev3 % mod;
	dp[nr][1] = (dp[nr - 1][0] + dp[nr][0]) % mod;

}

int main() {
	scanf("%d%d", &n, &q);
	rev3 = fast_exp(3, mod - 2);
	// for (int i = 0; i < 10; i++) {
	// 	cout << i << " witam " << (long long) i * rev3 % mod << endl;
	// }
	// cout << "siema " << rev3 << endl;
	compute_silnia();
	// cout << newton(6, 2) << " " << silnia[7] << " " << silnia[5] << " " << silnia[2] << endl;;
	dp[0][0] = n;
	dp[0][1] = n;
	for ( ; q--; ) 
{
		int a;
		scanf("%d", &a);
		for ( ; nr < a; ) 
{
			compute_next();
		}
		std::cout << dp[a][0] << "\n";
	}
}