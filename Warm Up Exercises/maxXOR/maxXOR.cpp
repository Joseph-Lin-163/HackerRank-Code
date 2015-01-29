#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
	The input contains two lines, L is present in the first line.
	R in the second line. 
*/
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
	int max = 0;
	int tempR = l;
	while (l != r) {
		if (max < (l ^ tempR))
			max = (l ^ tempR);
		if (++tempR > r)
			tempR = ++l;
		cout << l << " " << tempR << endl;
	}
	return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    //res = _r ^ _l;
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
