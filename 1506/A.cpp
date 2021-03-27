#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m, x;
    cin >> n >> m >> x;
    ll ans = (x + n - 1) / n + m * (x % n == 0 ? n - 1 : x % n - 1);
    cout << ans << endl;
}
int main(int argc, char const* argv[]) {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}