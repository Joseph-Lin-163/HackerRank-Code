#include <iostream>
using namespace std;

/*
	The first line contains an integer, T, the number of test cases.
	T lines follow. Each line contains an integer, N, that denotes the number of cycles for that test case.

	Sapling initial height = 1
	Sapling planted in spring
	Growth cycle in spring and summer -> first growth cycle, double, second, add 1, third, double... etc.
*/
int height(int n) {
	int ret = 1;
	for (int  i = 0; i < n; i++) {
		if (i % 2 == 0)
			ret *= 2;
		else
			ret += 1;
	}
    return ret;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
