#include <iostream>
using namespace std;
long long func(int n) {
	static long long _n;
	if (_n == 0) {
		_n = -1;
	}
	else {
		_n = 5 + pow(_n, 3);
	}


	return _n;

}
int main() {
	int count = 0;
	long long sum = 0;
	for (int i = 0; i < 7; i++) {
		if (func(i) > 0) {
			sum += func(i);
			count++;
		}
	}
	cout << '\n';
	cout << "Sum:" << sum;
	cout << '\n';
	system("pause");
	return 0;
}
