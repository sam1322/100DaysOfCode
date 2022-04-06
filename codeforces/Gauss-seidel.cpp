# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double
# define vld vector <ld>
# define vvld vector <vld>
using namespace std;
const ld epsilon = 1e-4;
const int epochs = 1e3;

void solve() {
	int n;
	cin >> n;
	vvld A(n, vld(n + 1));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + 1; j++) {
			cin >> A[i][j];
		}
	}

	vvld X(2, vld(n, 0));
	for (int epoch = 0; epoch < epochs; epoch++) {
		for (int i = 0; i < n; i++) {
			X[1][i] = A[i][n];
			for (int j = 0; j < n; j++) {
				if (i != j) {
					X[1][i] -= X[1][j] * A[i][j];
				}
			}
			X[1][i] /= A[i][i];
		}
		int ok = 1;
		for (int j = 0; j < n; j++) {
			if (abs(X[0][j] - X[1][j]) >= epsilon) {
				ok = 0;
				break;
			}
		}
		for (int j = 0; j < n; j++) {
			X[0][j] = X[1][j];
		}
		if (ok) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << X[0][i] << endl;
	}
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

// 4
// 10 -2 -1 -1 3
// -2 10 -1 -1 5
// -1 -1 10 -2 27
// -1 -1 -2 10 -9