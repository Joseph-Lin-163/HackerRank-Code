#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
    	int stones, a, b;
    	cin >> stones >> a >> b;
    	// (stones - 1)! possibilities
    	// but use combination instead of permutation because order doesn't matter
    	// wait jk I found a much better way to do it
    	long temp;
    	if (a < b)
    		temp = a*(stones-1);
    	else
    		temp = b*(stones-1);

    	if (a == b) 
    		cout << temp << endl;
    	else {
	    	cout << temp << " ";

	    	for (int j = 1; j < stones; j++) {
	    		if (a < b)
	    			temp = temp - a + b;
	    		else
	    			temp = temp - b + a;
	    		cout << temp << " ";
	    	}
	    	cout << endl;
    	}
    }
    return 0;
}
