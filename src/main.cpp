#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	while (0 != a || 0 != b || 0 != c) {
		if (b - a == c - b) {
			const auto& d = b - a;
			cout << "AP " << c + d << '\n';
		}
		else {
			const auto& r = b / a;
			cout << "GP " << c * r << '\n';
		}

		cin >> a >> b >> c;
	}

	return 0;
}