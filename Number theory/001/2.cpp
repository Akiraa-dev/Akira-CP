/**
 *    Author:  Akira
 *    Created: 04.06.2023 22:26:10
**/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x / __gcd(x, y) * y
typedef long long ll;
typedef long double ldb;
using namespace std;
/**------Ideas---------
---------------------**/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
ll max(ll a, ll b) {
	if(a > b) return a;
	return b;
}
void sieve(ll l, ll r) {
	int prime[r - l + 1];
	for(int i = 0; i <= r - l + 1; i++) { // Danh dau tat ca = 1
		prime[i] = 1;
	}
	for(int i = 2; i <= sqrt(r); i++) {
		for(int j = max(i * i, (l - i + 1) / i * i); j <= r; j += i) { // Cong thuc: (l - i + 1) / (i * i) 
			prime[j - l] = 0;
		}
	}
	for(int i = max(l, 2); i <= r; i++) {
		if(prime[i - l]) {
			cout << i << " ";	
		}
	}


}
void solve() {
	ll a, b; cin >> a >> b;
	sieve(a, b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
