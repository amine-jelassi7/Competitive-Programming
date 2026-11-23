//
// Created by amine on 23/11/2026.
//
#include <bits/stdc++.h>
using namespace std;

// --- Short Type Names & Macros ---
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// --- Optional Debugger (Prints only locally, ignored on CF) ---
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" = " << x << endl;
#else
#define debug(x)
#endif

// --- Solution for ONE Test Case ---
void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int buckets = b + 1;
    int bunch = r / buckets;
    int additional_ones = r % buckets;

    string res = "";

    for (int i = 0; i < buckets; i++) {
        if (additional_ones > 0) {
            res += string(bunch + 1, 'R');
            additional_ones--;
        } else {
            res += string(bunch, 'R');
        }

        if (i < b) {
            res += 'B';
        }
    }

    cout << res << "\n";
}

int main() {
    // --- Fast I/O Setup ---
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // Comment out the next line if the problem has ONLY 1 test case (no t given at start)
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}