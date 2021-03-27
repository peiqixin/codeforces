#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n; cin >> n;
    int a[n + 1], b[n + 1], tm[n + 1];
    a[0] = b[0] = tm[0] = 0;
    for (int i = 0; i < n; ++i) cin >> a[i + 1] >> b[i + 1];
    for (int i = 0; i < n; ++i) cin >> tm[i + 1];
    int arrival = 0, leave = 0;
    for (int i = 0; i < n; ++i) {
        arrival = leave + tm[i + 1] + a[i + 1] - b[i];
        leave = max(b[i + 1], arrival + (b[i + 1] - a[i + 1] + 1) / 2);
    }
    cout << arrival << endl;
}
int main(int argc, char const* argv[]) {
    // freopen("in", "r", stdin);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}