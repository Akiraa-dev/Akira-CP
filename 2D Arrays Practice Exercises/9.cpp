/**
 *    author:  akira
 *    created: 15/07/2023 20:11:58
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
#define ll long long
#define ull unsigned long long
#define ldb long double

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
void solve() {
	int n; cin >> n;
	vector<int> a;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			int tmp; cin >> tmp;
			a.push_back(tmp);
		}
		if(i % 2 == 0) {
			reverse(all(a));
			for(int i = 0; i < sz(a); i++) {
				cout << a[i] << " ";
			}
			a.clear();
			cout << endl;
		}
		else {
			for(int i = 0; i < sz(a); i++) cout << a[i] << " ";
			a.clear();
			cout << endl;
		}
	}
}

/** ------------------------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
	//freopen(".INP", "r", stdin);
	//freopen(".OUT", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	while(t--) solve();
	return 0;
}