/**
 *    author:  akira
 *    created: 30/05/2023 22:59:32
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

const ldb PI = 3.1415926535897932384626433832795;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

// Problem A
bool check(ll x) {
	if(x <= 5 && x != 4 && x != 1) return x;
	if(x < 2 || x % 2 == 0 || x % 3 == 0 || x % 5 == 0) return false;
	for(ll i = 5; i * i <= x; i += 6) {
		if(x % i == 0 || x % (i + 2) == 0) return false;
	}
	return true;
}
void solve() {
    ll n; cin >> n;
    if(check(n)) cout << "Yes";
    else cout << "No";
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("CKPRIME1.INP", "r", stdin);
    // freopen("CKPRIME1.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}