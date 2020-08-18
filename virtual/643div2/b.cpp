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
const int MAXN = 2e5 + 7;
int arr[MAXN];
int dp[MAXN]; 
int solve() {
    if (!(cin >> n))
        return 1;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        dp[i] = 0;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++){
        if (i)
            dp[i + 1] = dp[i];
        if (i - arr[i] + 1 >= 0)
            dp[i + 1] = max(dp[i + 1], dp[i - arr[i] + 1] + 1);
    }
    // for (int i = 0; i <= n; i++)
    //     cout << dp[i] << " \n"[i == n];
    cout << dp[n] << '\n';
    return 0;
}
 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tests = 1e9;
   cin >> tests;
    for (int i = 1; i <= tests; i++) {
        if (solve())
            break;
#ifdef LOCAL
        cout << "------------------------------\n";
#endif
    }
}