/**
 *    Author:  Akira
 *    Created: 04.06.2023 23:16:02
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
ll divisor(ll x) {
	ll cnt = 0;
	for(int i = 1; i <= sqrt(x); i++) {
		if(x % i == 0) {
			if(i != x / i) {
				cnt += 2;
			}
			else ++cnt;
		}
	}
	return cnt;
}
void solve() {
	ll n; cin >> n;
	cout << divisor(n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
