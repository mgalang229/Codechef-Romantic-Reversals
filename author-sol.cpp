#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		// view the image in this repository for better understanding
		// the answer can be solved by using observation in the position of the characters
		string ans = "";
		int from = 0;
		int to = k - 1;
		while (from < to) {
			ans += s[from];
			ans += s[to];
			from++;
			to--;
		}
		// edge case for odd-length substring:
		if (from == to) {
			ans += s[from];
		}
		// reverse the substring
		reverse(ans.begin(), ans.end());
		// add the remaining suffix substring (if there are)
		ans += s.substr(k, n);
		cout << ans << '\n';
  }
	return 0;
}
