#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int min = 1001;
    int sticks[n];
    for (int i = 0; i < n; i++) {
    	cin >> sticks[i];
    	if (sticks[i] < min)
    		min = sticks[i];
    }

    bool allZero = false;
    while (!allZero) {
    	int keepTrack = 0;
    	int newMin = 1001;
    	for (int i = 0; i < n; i++) {
	    	if (sticks[i] > 0) {
	    		sticks[i] -= min;
	    		if (sticks[i] > 0 && sticks[i] < newMin)
	    			newMin = sticks[i];
	    		keepTrack++;
    		}
    	}
    	min = newMin;
    	if (keepTrack == 0)
    		allZero = true;
    	else {
    		/*
    		for (int i = 0; i < n; i++) {
    			cout << sticks[i] << " ";
    		}
    		cout << endl;
    		cout << "min = " << min << " kt = " << keepTrack << endl;
    		*/
    		cout << keepTrack << endl;
    	}
    }

    return 0;
}
