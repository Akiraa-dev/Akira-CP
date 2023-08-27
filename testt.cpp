// author: hatakaze
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

string add_num(string a, string b) {
    ll carry = 0, sum;
    string ans;
    // Xử lí để hai xâu a và b có độ dài bằng nhau
    for(int i = 0; i < max(a.size(), b.size()); i++) {
        if(a.size() == b.size()) break; // Nếu bằng nhau thì dừng
        else if(a.size() < b.size()) {
            a = '0' + a;
        }
        else {
            b = '0' + b;
        }
    }
    // Lưu ý gán a cho ans sau khi cả 2 xâu a và b đã có độ dài bằng nhau
    ans = a;
    for(int i = a.size() - 1; i >= 0; i--) {
        sum = a[i] - '0' + b[i] - '0' + carry; // - ‘0’ để chuyển từ chuỗi sang số
        carry = sum / 10;
        ans[i] = (sum % 10) + '0'; // + ‘0’ để chuyển từ số sang chuỗi
    }
    if(carry == 1) ans = '1' + ans; // Nếu nhớ = 1 thì thêm ‘1’ vào trước ans
    return ans;
}
int main() {
    string a, b; cin >> a >> b;
    cout << add_num(a, b);
}