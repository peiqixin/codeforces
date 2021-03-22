#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 1;
void solve() {
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int ans = INT_MAX;
    for (int i = 1; i < n; ++i) {
        if (abs(a[i] - a[i - 1]) > 1) ans = 0;
        if (abs(a[i] - a[i - 1]) == 1) ans = min(ans, min(u, v));
        if (a[i] == a[i - 1]) ans = min(ans, v + min(v, u));
    }
    cout << ans << endl;
}
int main(int argc, char const* argv[])
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*
4
2 1 1
3 1
2 1 1
4 1
2 1 1
1 2
2 1 1
2 2
*/