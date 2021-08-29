#include <bits/stdc++.h>
#include <ostream>

using namespace std;
using ll = long long;


#define SZ(x) (int)((x).size())
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()

#define TMAX(type) numeric_limits<type>::max()
#define TMIN(type) numeric_limits<type>::min()
#ifdef LOCAL
#define ass(X) assert(X)
#else
#define ass(X) {}
#endif

int n;
const int MAXC = 1e5;
int MAXN;
vector<int> ans;
int was[MAXC];

bool rec(int pos, int prev) {
    if (pos == n) {
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i + 1 == n];
        return true;
    }
    if (pos + 1 == n) {
        if (was[MAXN])
            return false;
        prev = MAXN - 1;
        ans.push_back(MAXN);
        bool ret = rec(n, prev + 1);
        ans.pop_back();
        return ret;
    }
//    cout << pos << ' ' << prev << ' ' << was[0] << endl;
    for (int i = prev + 1; i <= MAXN; i++) {
        bool good = !was[MAXN - i];
        for (int j : ans) {
            if (was[i - j] || MAXN - i == i - j) {
                good = false;
                break;
            }
        }

        if (good) {
            for (int j : ans) {
                was[i - j] = true;
//                cout << i - j << " true\n";
            }
            was[MAXN - i] = true;
//            cout << MAXN - i << " true\n";
            ans.push_back(i);
            bool ret = rec(pos + 1, i);
            ans.pop_back();
            for (int j : ans) {
                was[i - j] = false;
//                cout << i - j << " false\n";
            }
            was[MAXN - i] = false;
//            cout << MAXN - i << " false\n";
            if (ret)
                return true;
        }
    }
    return false;
}

int solve() {
    if (!(cin >> n))
        return 1;
//    if (n == 11) {
//        cout << "0 1 4 13 28 33 47 54 64 70 72\n";
//        return 0;
//    }
//    if (n == 12){
//        cout << "0 2 6 24 29 40 43 55 68 75 76 85\n";
//        return 0;
//    }
//    if (n == 13){
//        cout << "0 2 5 25 37 43 59 70 85 89 98 99 106\n";
//        return 0;
//    }
    ans = {0};
    for (MAXN = 127; ; MAXN++)
        if (rec(1, 0))
            return 0;
//        else
//            cout << MAXN << endl;
    return 0;
}

signed main() {
#ifdef LOCAL
    freopen("a.in", "r", stdin);
#endif
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    int tests = 1e9;
//    cin >> tests;
    for (int i = 1; i <= tests; i++) {
        if (solve())
            break;
#ifdef LOCAL
        cout << "------------------------------\n";
#endif
    }
}