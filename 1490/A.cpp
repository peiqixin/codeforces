#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int ret = 0;
    for (int i = 1; i < n; ++i) {
        int mi = min(a[i], a[i - 1]);
        int ma = max(a[i], a[i - 1]);
        while (mi * 2 < ma) {
            ret++;
            mi *= 2;
        }
    }
    cout << ret << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}