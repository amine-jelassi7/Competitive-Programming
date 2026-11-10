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

// --- Solution for ONE Test Case ---
void solve() {
    ll a, b;
    cin >> a >> b;
    if (a <= b) cout << -1 << "\n";
    else cout << min(b, a - b) << "\n";
}
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}