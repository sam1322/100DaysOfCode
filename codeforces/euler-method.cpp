# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double
using namespace std;bool steps = true;

ld f(ld x, ld y) {
	return x + 2 * y;
}

void solve() {
	int n; ld x0, y0, xn;
	cin >> x0 >> y0 >> xn >> n;
	ld h = (xn - x0) / n;
	ld x = x0, y = y0;
	
	for (int i = 0; i < n; i++) {
		y += h * f(x, y);
		x += h;
	}
	
	cout << y << endl;
}

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << fixed << setprecision(4);
	# ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	# endif
	solve();
}

/*
Euler's Method

Input Format -
x0 y0 xn n
Sample Input -
1 1 2 10
Sample Function -
f(x) = x + 2 * y;
Sample Output -
9.5855

*/