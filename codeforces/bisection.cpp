# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double
using namespace std;
const ld pi = 3.14159265358979323846;
const ld e = 2.71828182845904523536;
const ld epsilon = 1e-4;

ld f(ld x) {
	return x * x * x - 5 * x + 1;//for the equation x^3 - 5x + 1 = 0
}

void solve() {
	ld a, b, c;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	if (f(a) * f(b) >= 0) {
		cout << "Invalid starting points!" << endl;
		return;
	}
	int epochs = ceil(log2((b - a) / epsilon));
	
	for (int epoch = 0; epoch < epochs; epoch++) {
		c = (a + b) / 2;
		if (f(a) * f(c) < 0) {
			b = c;
		}
	else {
		a = c;
		}
	}
	cout << c << endl;
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
	return 0;
}