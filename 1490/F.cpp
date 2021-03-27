#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
void solve() {
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> cnt, cnt2;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for (auto [k, val] : cnt) {
        if (cnt2.find(val) == cnt2.end()) v.push_back(val);
        cnt2[val]++;
    }
    sort(v.begin(), v.end());
    int ans = n;
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        int cur = sum;
        for (int j = i + 1; j < v.size(); ++j) {
            cur += (v[j] - v[i]) * cnt2[v[j]];
        }
        ans = min(ans, cur);
        sum += v[i] * cnt2[v[i]];
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}