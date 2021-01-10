#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char *argv[]) {
    const int MAX = 2e5;
    registerGen(argc, argv, 1);
    int n = opt<int>("n");
    int t = MAX / n;
    auto coords = opt<std::string>("type");
    int border = 0;
    if (coords == "small")
        border = 10;
    if (coords == "medium")
        border = 100;
    if (coords == "large")
        border = 1e9;
    std::cout << t << '\n';
    for (int tt = 0; tt < t; tt++) {
        std::cout << n << '\n';
        set<pair<int, int>> points;
        for (int i = 0; i < n; i++) {
            int x = rnd.next(0, border);
            int y = rnd.next(0, border);
            if (points.count({x, y}))
                continue;
            points.insert({x, y});
            std::cout << x << ' ' << y << '\n';
        }
    }
    return 0;
}
