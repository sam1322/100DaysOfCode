# include <bits/stdc++.h>
# define int long long
# define endl "\n"
# define ld long double
using namespace std;
ld f(ld x) {
return 1 / (1 + x * x);
}void solve() {
ld a, b;
cin >> a >> b;
int n;
cin >> n;
ld h = (b - a) / n;
vector <ld> Y(n + 1);
for (int i = 0; i <= n; i++) {
Y[i] = f(a + i * h);
}
ld ans = 0;
for (int i = 0; i <= n; i++) {
if (i == 0 || i == n) {
ans += Y[i];
}
else {
ans += 2 * Y[i];
}
}
ans *= h / 2;
cout << ans << endl;
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
Trapezoidal Rule
Input Format -
a b n

Sample Input -
0 1 6

Sample Function -
f(x) = 1 / (1 + x * x);

Sample Output -
0.7842
*/