//
// Created by amine on 10/11/2026.
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
    ll a,b,c;
    cin >> a >> b >> c;
    if (a>=b) {
        cout << a+c-b << '\n';
    }
    else {
        cout << max(b-a,abs(a+c-b)) << '\n';
    }

}

int main() {
    // --- Fast I/O Setup ---
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}