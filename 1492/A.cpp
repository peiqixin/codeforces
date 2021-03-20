#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll p, a, b, c;
    cin >> p >> a >> b >> c;
    ll x = (p + a - 1) / a;
    ll y = (p + b - 1) / b;
    ll z = (p + c - 1) / c;
    cout << min(a * x - p, min(b * y - p, c * z - p)) << endl;
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
