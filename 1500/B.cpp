#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    int cnt = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == 0) {
            if (cnt) a[i] = 1, cnt--;
        }
        else {
            cnt = max(a[i] - 1, cnt - 1);
            a[i] = 1;
        }
    }
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << endl;
}
int main(int argc, char const* argv[]) {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}