#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, t;
    cin >> n;
    cin >> t;
    int width[n];
    for (int i = 0; i < n; i++) {
    	cin >> width[i];
    }
    for (int iter = 0; iter < t; iter++) {
    	int i, j;
    	cin >> i;
    	cin >> j;
    	int min = 4;
    	for ( ; i <= j; i++) {
    		if (width[i] < min)
    			min = width[i];
    	}
    	cout << min << endl;
    }
    return 0;
}
