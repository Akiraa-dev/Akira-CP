/**
 *    Author:  Akira
 *    Created: 09.06.2023 14:29:30
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
int m, k;
char a[500][26];
vector<int> ans;
void check(ll x) {
	for(int i = 0; i < m; i++) {
		ans.pb(x % k);
		x /= k;
	}
	reverse(all(ans));
	return;
}
void solve() {
	ll n, x; cin >> n >> m >> k >> x;
	string s; cin >> s;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < k; j++) {
			cin >> a[i][j];
		}
		sort(a[i], a[i] + k);
	}
	check(x - 1);
	ll pos = 0;
	for(int i = 0; i < sz(ans); i++) {
		if(i == sz(ans) - 1) {
			cout << ans[i];
		}
		else {
			cout << ans[i] << " ";	
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++) {
		if(s[i] == '#') {
			cout << a[pos][ans[pos]];
			++pos;
		}
		else cout << s[i];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}
