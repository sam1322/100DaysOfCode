# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double

using namespace std;ld f(ld x, ld y) {
	return 3 * x + y * y;
}

void solve() {
	int n; ld x0, y0, xn;
	cin >> x0 >> y0 >> xn >> n;
	ld h = (xn - x0) / n;
	ld x = x0, y = y0;
	for (int i = 0; i < n; i++) {
		ld k1 = h * f(x, y);
		ld k2 = h * f(x + h, y + k1);
		//cout << y << endl << k1 << " " << k2 << " " << k3 << " " << k4 << endl;
		x += h;
		y += (k1 + k2) / 2;
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
Runge - Kutta (2nd Order)
f(x, y) = dy/dx
Sample Input -
1 1.2 1.1 10
Sample Function -
f(x, y) = 3 * x + y * y
Sample Output -
1.7270
*/