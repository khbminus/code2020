#include <bits/stdc++.h>


using namespace std;


int main(){
	mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
	int n = rnd() % 7 + 1;
	int m = rnd() % 10 + 1;
	cout << n << ' ' << m << '\n';
	for (int i = 0; i < n; i++)
		cout << (int)(rnd() % m + 1) << " \n"[i == n - 1];
}