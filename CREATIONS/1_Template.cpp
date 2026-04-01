#include <bits/stdc++.h>
using namespace std;

// -------------------- SHORT --------------------
using ll = long long;

// -------------------- CONSTANTS --------------------
const int INF = 1e18;
const int MOD = 1e9 + 7;

// -------------------- FAST I/O --------------------
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// -------------------- UTILITY FUNCTIONS --------------------
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int mod_add(int a, int b) { return (a % MOD + b % MOD) % MOD; }
int mod_mul(int a, int b) { return (a % MOD * b % MOD) % MOD; }
int mod_pow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a);
        a = mod_mul(a, a);
        b >>= 1;
    }
    return res;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
    }

    return 0;
}