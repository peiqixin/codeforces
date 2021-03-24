#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int cnt = 0;
    for (auto& x : a) cin >> x, cnt += x;
    while (q--) {
        int t, x;
        cin >> t >> x;
        x--;
        if (t == 1) {
            if (a[x]) cnt--;
            else cnt++;
            a[x] = 1 - a[x];
        }
        else {
            if (x < cnt) cout << "1\n";
            else cout << "0\n";
        }
    }
}