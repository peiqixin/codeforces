#include <bits/stdc++.h>
using namespace std;
void dq(int l, int r, vector<int>& a, vector<int>& d, int depth) {
    if (l >= r) return;
    int ma = l;
    for (int i = l + 1; i < r; ++i)
        if (a[i] > a[ma]) ma = i;
    d[ma] = depth;
    dq(l, ma, a, d, depth + 1);
    dq(ma + 1, r, a, d, depth + 1);
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    vector<int> d(n);
    dq(0, n, a, d, 0);
    for (auto x : d) printf("%d ", x);
    puts("\n");
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
