#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    int i, j;
    for (i = 0; i < n; ++i) if (s[i] == '*') {
        s[i] = 'x';
        ans++;
        break;
    }
    for (j = n - 1; j >= 0; --j) if (s[j] == '*') {
        s[j] = 'x';
        ans++;
        break;
    }
    while (i + k < j) {
        for (int c = k; c >= 0; --c) {
            if (s[i + c] == '*') {
                ans++;
                s[i + c] = 'x';
                i += c;
                break;
            }
        }
    }
    cout << ans << endl;
}
int main(int argc, char const* argv[]) {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}