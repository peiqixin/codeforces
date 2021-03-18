#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const* argv[])
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> left(m), right(m);

    for (int i = 0, j = 0; i < n && j < m; ++i) {
        if (s[i] == t[j]) {
            left[j] = i;
            j++;
        }
    }
    for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; --i) {
        if (s[i] == t[j]) {
            right[j] = i;
            j--;
        }
    }
    int ans = 0;
    for (int i = 0; i < m - 1; ++i) {
        ans = max(ans, right[i + 1] - left[i]);
    }
    printf("%d\n", ans);
    return 0;
}

/*
5 3
abbcbbc
abc
*/