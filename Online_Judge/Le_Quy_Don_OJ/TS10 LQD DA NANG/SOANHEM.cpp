/**
 *    author:  akira
 *    created: 07/07/2023 12:10:33
**/
#include <bits/stdc++.h>
using namespace std;

/** --------MACROS-------- **/
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>

typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
                                
/** --------PROBLEM SOLVING-------- **/
void sieve(vector<bool> &pr) {
	pr[1] = false;
	for(ll i = 2; i * i <= 1460; i++) {
		if(pr[i]) {
			for(ll j = 2 * i; j <= 1460; j += i) {
				pr[j] = false;
			}
		}
	}
}
llll allsum(int n) {
	ll sum = 0, sqsum = 0, x;
	while(n) {
		x = n % 10;
		sum += x;
		sqsum += x * x;
		n /= 10;
	}
	return (make_pair(sum, sqsum));
}
int count(int l, int r) {
	vector<bool> pr(1460, true);
	sieve(pr);
	ll cnt = 0;
	for(ll i = l; i <= r; i++) {
		llll digit = allsum(i);
		if(pr[digit.fi] && pr[digit.se]) {
			++cnt;
		}
	}
	return cnt;
}
void solve() {
	ll l, r; cin >> l >> r;
	cout << count(l, r);
}

/** ------------NOTES-------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
	freopen("ANHEM.INP", "r", stdin);
	freopen("ANHEM.OUT", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	while(t--) {
		solve();	
	}
	return 0;
}