#include <bits/stdc++.h>
#include <ostream>
#include <immintrin.h>
 
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
struct Node{
    int sum = 0;
    int push = -1;
};
const int MAXC = 1e7 + 7;
Node* nodes;
int pnt = 0;
int new_node(){
    return pnt++;
}

int push(int v, int tl, int tr){

}

int get(int v, int)

 
int solve() {
    if (!(cin >> n))
        return 1;
    return 0;
}
 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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