//
// Created by amine on 16/11/2026.
//
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

#ifndef ONLINE_JUDGE

#define debug(x) cerr << #x <<" = " << x << endl;
#else
#define debug(x)
#endif

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> array(n) ;
    for (int i = 0; i < n; i++) {
        int remainder ;
        a[i]%k ==0 ? remainder = k : remainder = a[i]%k ;
        array[i] = {remainder, i+1} ;
    }
    sort(array.begin(), array.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });


    for (int i=0; i<n; i++) {
        cout << array[i].second << " ";
    }
    cout <<'\n';


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}