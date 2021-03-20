#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    int r = n;
    vector<int> ans;
    // 单调栈
    vector<pii> s;
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && s.back().first < a[i]) s.pop_back();
        s.push_back({ a[i], i });
    }
    int end = n;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = s[i].second; j < end; ++j) ans.push_back(a[j]);
        end = s[i].second;
    }
    for (auto x : ans) cout << x << " ";
    cout << endl;
}

int main(int argc, char const* argv[])
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
