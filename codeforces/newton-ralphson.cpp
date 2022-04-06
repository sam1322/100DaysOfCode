# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double
using namespace std;
const ld pi = 3.14159265358979323846;
const ld e = 2.71828182845904523536;
const ld epsilon = 1e-4;
const int epochs = 10;

ld f(ld x) {
	return x * x * x - 5 * x + 1;
}

ld df(ld x, int order = 1) {
	if (order == 0) {
		return f(x);
	}
	// return (df(x + epsilon, order - 1) - df(x - epsilon, order - 1)) / (2 * epsilon);
	return (df(x + epsilon, order - 1) - df(x, order - 1)) / ( epsilon);
}

void solve() {
	ld x, fx, dfx, d2fx;
	cin >> x;
	fx = f(x), dfx = df(x), d2fx = df(x, 2);
	
	if (abs(fx * d2fx) >= dfx * dfx) {
		cout << "Invalid starting points!" << endl;
		return;
	}

	for (int epoch = 0; epoch < epochs; epoch++) {
		fx = f(x), dfx = df(x);
		if (abs(fx) < epsilon) {
			break;
		}
		if (dfx == 0) {
			cout << "Slope found to be 0" << endl;
			break;
		}
		x -= fx / dfx;
		cout <<"x"<<epoch<<" "<< x << endl;
	}
	cout << x << endl;
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