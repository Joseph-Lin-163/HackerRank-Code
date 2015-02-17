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
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void output(vector <int> ar) {
	for (int i = 0; i < ar.size(); i++) {
		cout << ar[i] << " ";
	}
}

void insertionSort(vector <int>  ar) {
	int var;
	var = ar[0];
	for (int i = 0; i < ar.size(); i++) {
		if (var > ar[i]) { // last is greater than current
			var = ar[i]; // set var to last (which is less than prior elements)
			for (int j = i; j > 1; j--) {
				ar[j] = ar[j-1]; // shift forward elements
				if (var < ar[j] && var > ar[j-2]) { // check to see if var is greater than
					output(ar);
					ar[j-1] = var;
					cout << endl;
					break;
				}
				else if (j == 2 && var < ar[j-2]) {
					output(ar);
					ar[j-1] = ar[j-2];
					cout << endl;
					

					output(ar);
					ar[j-2] = var;
					cout << endl;
					break;	
				}
				output(ar);
				cout << endl;
			}
			var = ar[i];
			output(ar);
			cout << endl;
		}
		else {
			var = ar[i];
		}

	}
}

int main(void) {
   	vector <int>  _ar;
   	int _ar_size;
	cin >> _ar_size;
	
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   		int _ar_tmp;
   		cin >> _ar_tmp;
   		_ar.push_back(_ar_tmp); 
	}

	insertionSort(_ar);
   
   return 0;
}
