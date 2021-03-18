#include <bits/stdc++.h>
using namespace std;
vector<int> v{ 0, 1, 5, -1, -1, 2, -1, -1, 8, -1 };

bool judge(int x) {
    string s = to_string(x);
    if (s.size() == 1) s = '0' + s;
    for (auto x : s) {
        if (v[x - '0'] == -1) return false;
    }
    return true;
}

string mirror(string& s) {
    string ret;
    for (auto& ch : s) {
        if (ch == ':') {
            ret.push_back(':');
            continue;
        }
        ret.push_back('0' + v[ch - '0']);
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

void sovle() {
    int h, m;
    cin >> h >> m;
    string s;
    cin >> s;
    int a = (s[0] - '0') * 10 + s[1] - '0';
    int b = (s[3] - '0') * 10 + s[4] - '0';
    while (true) {
        while (!judge(a) || !judge(b)) {
            b++;
            if (b >= m) a++, b = 0;
            if (a >= h) a = 0;
        }
        assert(a < 100 && b < 100);
        char str[6];
        sprintf(str, "%02d:%02d", a, b);
        string ret(str);
        ret = mirror(ret);
        int c = (ret[0] - '0') * 10 + ret[1] - '0';
        int d = (ret[3] - '0') * 10 + ret[4] - '0';
        if (c < h && d < m) {
            cout << str << endl;
            return;
        }
        b++;
    }
}

int main(int argc, char const* argv[])
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        sovle();
    }
    return 0;
}