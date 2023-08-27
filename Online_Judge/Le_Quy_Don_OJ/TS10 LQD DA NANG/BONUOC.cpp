// author:  akira (a.k.a Tran Gia Huy)
#include "bits/stdc++.h"
using namespace std;

/** --------MACROS-------- **/
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fi first
#define se second
#define ll long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
[[maybe_unused]] ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
[[maybe_unused]] ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
[[maybe_unused]] ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/** --------PROBLEM SOLVING-------- **/
const int N = 1000000;
vector<int>lp (N + 1), pr;
void solve() {
    int n; cin >> n;
    for(int i = 2; i <= N; i++) {
        if(!lp[i]) {
            lp[i] = i;
            pr.emplace_back(i);
        }
        for(int j = 0; i * pr[j] <= N; j++) {
            lp[i * pr[j]] = pr[j];
            if(pr[j] == lp[i]) break;
        }
    }
    int cnt = 0;
    for(int i = 0; i < (n >> 1); i++) {
        if(pr[i] * pr[i] * pr[i] <= n) ++cnt;
        if(pr[i] * pr[i] * pr[i] > n) {
            if(n % pr[i] != 0) {
                cout << 0;
                return;
            }
        }
    }
    cout << cnt;
}

/** ------------------------------

    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
    fastIO
//	freopen("test.INP", "r", stdin);
//	freopen("test.OUT", "w", stdout);
	int t = 1;
	while(t--) solve();
	return 0;
}