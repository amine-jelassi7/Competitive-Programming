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

bool check_int(double a) {
    return (a - floor(a)) == 0.0;
}

void solve() {
    int x0, y0, R;
    cin >> x0 >> y0 >> R;

    int ans_x = x0, ans_y = y0;


    for (int x = x0 - R; x <= x0 + R; x++) {
        double y = y0 - sqrt(pow(R, 2) - pow(x - x0, 2));

        if (check_int(y)) {
            ans_x = x;
            ans_y = (int)y;
            break;
        }
    }
    cout << ans_x << " " << ans_y << '\n';
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