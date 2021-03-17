#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    for (int i = n; i > k; --i) ans.push_back(i);
    for (int i = k - 1; i > (k - 1) / 2; --i) ans.push_back(i);
    cout << ans.size() << endl;
    for (auto x : ans) cout << x << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}