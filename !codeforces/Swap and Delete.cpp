#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int count0 = 0, count1 = 0;
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }

    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (count1 > 0) {
                count1--;
            } else {
                cout << n - i << "\n";
                return;
            }
        } else {
            if (count0 > 0) {
                count0--;
            } else {
                cout << n - i << "\n";
                return;
            }
        }
    }

    cout << 0 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}