//
// Created by amine on 11/10/2026.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> printed(n + 1, false);
    vector<int> memory_stack;

    for (int i = 1; i <= n; ++i) {
        char cmd = s[i - 1];
        if (cmd == '1') {
            memory_stack.push_back(i);
        } else if (cmd == '2') {
            if (!memory_stack.empty()) {
                int top_doc = memory_stack.back();
                memory_stack.pop_back();
                printed[top_doc] = true;
            } else {
                printed[i] = true;
            }
        } else if (cmd == '3') {
            printed[i] = true;
        }
    }

    vector<int> unprinted;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            unprinted.push_back(i);
        }
    }

    cout << unprinted.size() << "\n";
    for (int i = 0; i < (int)unprinted.size(); ++i) {
        cout << unprinted[i] << (i + 1 == (int)unprinted.size() ? "" : " ");
    }
    cout << "\n";
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