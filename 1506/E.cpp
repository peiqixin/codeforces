#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    int a[n], ans[n], ans2[n];
    vector<int> v, v2;
    priority_queue<int> q;
    int idx = 1, pre = 0, idx2 = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        ans2[i] = ans[i] = a[i] = x;
        if (x != pre) {
            while (idx < x) v.push_back(idx++);
            idx++;
            for (int j = pre + 1; j < x; ++j) q.push(j);
        }
        else {
            v2.push_back(q.top());
            q.pop();
        }
        pre = x;
    }
    pre = 0;
    for (int i = 1, j = 0; i < n; ++i) {
        if (ans[i] == ans[pre]) ans[i] = v[j], ans2[i] = v2[j++];
        else pre = i;
    }
    for (auto x : ans) cout << x << " ";
    cout << endl;
    for (auto x : ans2) cout << x << " ";
    cout << endl;
}
int main(int argc, char const* argv[]) {
    freopen("in", "r", stdin);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
