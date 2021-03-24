#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;
    cin >> n;

    vector<ll> key;
    map<ll, vector<int>> mp;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (!mp.count(x)) {
            mp[x] = vector<int>();
            key.push_back(x);
        }
        mp[x].push_back(i);
    }

    sort(key.begin(), key.end());
    vector<ll> sum(key.size() + 1, 0);
    for (int i = 0; i < key.size(); ++i) {
        sum[i + 1] = sum[i] + 1LL * mp[key[i]].size() * key[i];
    }

    vector<int> ans;
    int ma = 0;
    for (int i = key.size() - 1; i >= 0; --i) {
        if (sum[i + 1] >= ma) {
            for (auto& pos : mp[key[i]]) ans.push_back(pos);
            ma = key[i];
        }
        else break;
    }
    sort(ans.begin(), ans.end());
    printf("%lu\n", ans.size());
    for (auto x : ans) printf("%d ", x + 1);
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}