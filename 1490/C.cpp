#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a(10010);
void solve() {
    ll x;
    cin >> x;
    for (int i = 1; i <= (int)pow(x, 1.0 / 3); ++i) {
        int l = 1, r = 10000;
        while (l <= r) {
            int mid = (l + r + 1) / 2;
            if (a[i] + a[mid] < x) l = mid + 1;
            else if (a[i] + a[mid] > x) r = mid - 1;
            else {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= 10000; ++i) {
        a[i] = pow(1LL * i, 3);
    }
    while (t--) solve();
    return 0;
}