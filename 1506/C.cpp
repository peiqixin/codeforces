#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ma = max(n, m);
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i] == b[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
            else dp[i + 1][j + 1] = 0;
            ans = max(ans, dp[i + 1][j + 1]);
        }
    }
    cout << n + m - ans * 2 << endl;
}
int main(int argc, char const* argv[]) {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}