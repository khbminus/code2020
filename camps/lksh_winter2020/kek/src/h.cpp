#include<bits/stdc++.h>

using namespace std;
#define int long long
#define ii pair <int, int>
#define app push_back
#define all(a) a.begin(), a.end()
#define bp __builtin_popcountll
#define ll long long
#define mp make_pair
#define x first
#define y second
#define Time (double)clock()/CLOCKS_PER_SEC
#define debug(x) std::cout << #x << ": " << x << '\n';
#define FOR(i, n) for (int i = 0; i < n; ++i)
#define pb push_back
#define trav(a, x) for (auto& a : x)
using vi = vector<int>;

template<typename T>
std::ostream &operator<<(std::ostream &output, const pair<T, T> &data) {
    output << "(" << data.x << "," << data.y << ")";
    return output;
}

template<typename T>
std::ostream &operator<<(std::ostream &output, const std::vector<T> &data) {
    for (const T &x : data)
        output << x << " ";
    return output;
}
//ll div_up(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
//ll div_down(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down 
#define tcT template<class T
#define tcTU tcT, class U
tcT> using V = vector<T>;

tcT> void re(V<T> &x) {
    trav(a, x)cin >> a;
}

tcT> bool ckmin(T &a, const T &b) {
    return b < a ? a = b, 1 : 0;
} // set a = min(a,b)
tcT> bool ckmax(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}

signed main() {
#ifdef HOME
    freopen("input.txt", "r", stdin);
#else
#define endl '\n'
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif

    set<string> ms = {"jingle", "bells"};

    string w;
    cin >> w;
    if (ms.count(w))
        cout << w << endl;
    else {
        FOR (i, w.size())cout << '*';
        cout << endl;
    }

}