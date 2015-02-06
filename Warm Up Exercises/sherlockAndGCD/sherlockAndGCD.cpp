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
    	int N;
    	cin >> N;
    	int *a = new int[N];
    	for (int l = 0; l < N; l++) {
    		cin >> a[l];
    	}


    	for (int j = 0; j < N; j++) {
    		for (int k = j+1; k < N; k++) {

    			if (a[j] < a[k]) {
    				if (a[k] % a[j] == 0)
    					continue;

    				int l;
    				bool next = false;
    				for (l = 2; l < a[j]/2 + 1; l++) {
	    				if (a[k] % l == 0 && a[j] % l == 0) {
	    					next = true;
	    					break;
	    					//cout << "NO" << endl;
	    					//cout << a[k] << " " << a[j] << endl;
	    					//goto endTest;
	    				}
    				}
    				
    				if (next) {//(l != a[j]/2 && l <= a[j]) {
    					//cout << l << endl;
    					continue;
    				}
    				else {
    					//cout << l << " " << a[k] << " " << a[j] << endl;
    					cout << "YES" << endl;
    					goto endTest;
    				}
    			}
    			else {
    				if (a[j] % a[k] == 0)
    					continue;
    				
    				int l;
    				bool next = false;
    				for (l = 2; l < a[k]/2 + 1; l++) {
	    				if (a[k] % l == 0 && a[j] % l == 0) {
	    					next = true;
	    					break;
	    					//cout << "NO" << endl;
	    					//cout << a[k] << " " << a[j] << endl;
	    					//goto endTest;
	    				}
    				}
    				if (next) {//(l != a[k]/2 && l <= a[k]) {
    					//cout << l << endl;
    					continue;
    				}
    				else {
    					//cout << l << " "  << a[k] << " " << a[j] << endl;
    					cout << "YES" << endl;
    					goto endTest;
    				}
    			}

    		}
    	}
    	cout << "NO" << endl;
    	endTest:
    	delete [] a;
    }
    return 0;
}
