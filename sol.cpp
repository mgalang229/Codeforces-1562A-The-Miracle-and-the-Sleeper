#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		// based on observation, the highest value of ('r' mod 'x')
		// is wherein 'x' is equal to ('r' / 2) + 1
		cout << r % max(r / 2 + 1, l) << '\n';
	}
	return 0;
}
