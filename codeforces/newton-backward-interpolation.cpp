# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double
# define vld vector <ld>
# define vvld vector <vld>
using namespace std;

void solve() {
	int n;
	cin >> n;
	ld x;
	cin >> x;
	
	vld X(n), Y(n);
	for (int i = 0; i < n; i++) {
		cin >> X[i] >> Y[i];
	}
	
	vvld diffTable(n, vld(n + 1, 0));
	
	for (int i = 0; i < n; i++) {
		diffTable[i][0] = X[i];
		diffTable[i][1] = Y[i];
	}

	for (int j = 2; j < n + 1; j++) {
		for (int i = 0; i < n + 1 - j; i++) {
			diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
		}
	}
	
	ld a = X[n - 1], h = X[1] - X[0];
	ld u = (x - a) / h;ld y = Y[n - 1];
	ld uCr = 1;
	
	for (ld r = 0; r < n - 1; r++) {
		uCr *= (u + r);
		uCr /= (r + 1);
		y += uCr * diffTable[n - 2 - r][r + 2];
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
Newton's Backward Interpolation Method
Sample Input -
5 1925
1891 46
1901 66
1911 81
1921 93
1931 101
Sample Output -
96.8368

*/
