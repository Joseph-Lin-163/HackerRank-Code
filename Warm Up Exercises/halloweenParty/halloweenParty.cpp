#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    long k;
    cin >> t;
    for (int i = 0; i < t; i++) {
    	cin >> k;
    	if (k % 2 == 0)
    		cout << (k/2)*(k/2) << endl;
    	else
    		cout << (k/2)*((k/2)+1) << endl;
    }
    return 0;
}
