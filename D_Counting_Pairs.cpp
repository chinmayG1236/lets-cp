#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll x1, ll x2, ll G, ll l, ll r) {
    return (x1 * G >= l && x1 * G <= r) && (x2 * G >= l && x2 * G <= r);
}

void solve() {
    ll l, r, G;
    cin >> l >> r >> G;

    // if (l % G != 0 && l / G == r / G) {
    //     cout << "-1 -1\n"; // No valid multiples in range
    //     return;
    // }

    ll f1 = (l + G - 1) / G; // Smallest integer >= l/G
    ll f4 = r / G;           // Largest integer <= r/G

    if (f1 > f4) { // No valid multiples
        cout << "-1 -1\n";
        return;
    }

    pair<ll, ll> best = {-1, -1};
    ll max_diff = -1;

    for (ll x1 = f1; x1 <= f4; ++x1) {
        for (ll x2 = x1 + 1; x2 <= f4; ++x2) {
            if (__gcd(x1, x2) == 1) {
                ll diff = abs(x1 * G - x2 * G);
                if (diff > max_diff) {
                    max_diff = diff;
                    best = {x1 * G, x2 * G};
                } else if (diff == max_diff && x1 * G < best.first) {
                    best = {x1 * G, x2 * G};
                }
            }
        }
    }

    if (best.first == -1) {
        cout << "-1 -1\n";
    } else {
        cout << best.first << " " << best.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
