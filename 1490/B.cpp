#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt[3]{};
    for (auto& x : a) cin >> x, cnt[x % 3]++;
    int ret = 0;
    n /= 3;
    for (int j = 0; j < 2; j++)
        for (int i = 0; i < 3; ++i) {
            ret += abs(cnt[i] - n);
            if (cnt[i] > n) cnt[(i + 1) % 3] += cnt[i] - n;
            else cnt[(i - 1 + 3) % 3] -= n - cnt[i];
            cnt[i] = n;
        }

    cout << ret << endl;
}
int main() {
    // freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}