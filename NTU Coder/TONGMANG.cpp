/**
 *    Author:  Akira
 *    Created: 15.06.2023 20:59:30
**/
#include <bits/stdc++.h>
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
void solve() {
	ll x, sum = 0;
	vector<ll> v;
	while(cin >> x) {
		v.pb(x);
		sum += x;
	}
	ll tmp = 0;
	for(ll i = 0; i < sz(v); i++) {
		if(v[i] == sz(v) - 1) {
			tmp = v[i];
			break;
		}
	}
	cout << sum - tmp;
}

int main() {
	//freopen("ahihi.inp", "r", stdin);
	//freopen("ahihi.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
