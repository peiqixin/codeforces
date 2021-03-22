#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        // u不可能到达v
        if (u > v) cout << "NO" << endl;
        else {
            int a = 0, b = 0;
            // u低位的1可以变成v高位的1
            // 11 -> 110
            // 11 -> 111
            for (int i = 0; i < 31; ++i) {
                if (u >> i & 1) a++;
                if (v >> i & 1) b++;
                if (b) {
                    if (!a) {
                        cout << "NO" << endl;
                        goto end;
                    }
                    a--;
                    b--;
                }
            }
            cout << "YES" << endl;
        }
    end:
        ;
    }
    return 0;
}