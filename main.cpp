#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n, l, k;
vii prob;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> l >> k;
	prob = vii(n);
	for (auto&& [x, y] : prob) {
		cin >> y >> x;
	}

	sort(prob.begin(), prob.end());
	auto ans = int{ 0 };
	for (auto&& [x, y] : prob) {
		if (0 < k) {
			if (x <= l) {
				ans += 140;
				--k;
				x = l + 1;
				y = l + 1;
			}
		}
		else {
			break;
		}
	}

	for (const auto& [x, y] : prob) {
		if (0 < k) {
			if (y <= l) {
				ans += 100;
				--k;
			}
		}
		else {
			break;
		}
	}

	cout << ans;

	return 0;
}