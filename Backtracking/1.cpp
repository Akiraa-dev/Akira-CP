/**
 *    Author:  Akira
 *    Created: 07.06.2023 15:05:39
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

Sinh xau nhi phan co do dai N

---------------------**/
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
int x[100];
int n;
void res() {
	for(int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << endl;
}
void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {
			res();
		}
		else Try(i + 1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	Try(1);
	return 0;
}
