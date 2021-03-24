#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (auto& x : s) cin >> x;
    ll ans = 0;
    vector<ll> step(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = i + 2; j < min(n, i + s[i] + 1); j++) {
            step[j]++;
        }
        step[i + 1] += max(0LL, step[i] - s[i] + 1);
        ans += max(0LL, s[i] - step[i] - 1);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}