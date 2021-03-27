#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    int x;
    // 使用unordered_map超时
    map<int, int> mp;
    for (int i = 0; i < n; ++i) cin >> x, mp[x]++;
    priority_queue<int, vector<int>, less<int>> q;
    for (auto [x, y] : mp) {
        q.push(y);
    }
    int cnt = 0;
    while (!q.empty()) {
        auto x = q.top(); q.pop();
        if (q.empty()) break;
        auto y = q.top(); q.pop();
        x--; y--;
        if (x) q.push(x);
        if (y) q.push(y);
        cnt++;
    }
    cout << n - cnt * 2 << endl;
}
int main(int argc, char const* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}