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
    	string runningCount;
    	cin >> N;
    	
    	if (N < 3 || N == 4 || N == 7) {
    		cout << -1 << endl;
    		continue;
    	}

    	if (N % 3 == 0) {    		
    		for (int j = 0; j < N; j++) {
    			runningCount += "5";
    		}
    		cout << runningCount << endl;
    		continue;
    	}
    	else if (N % 3 == 1) {
    		int numThrees = 10;
    		int numFives = N - numThrees;
    		
    		for (int j = 0; j < numFives; j++) {
    			runningCount += "5";
    		}
    		for (int j = 0; j < numThrees; j++) {
    			runningCount += "3";
    		}
    		cout << runningCount << endl;
    		continue;
    	}
    	else if (N % 3 == 2) {
    		int numThrees = 5;
    		int numFives = N - numThrees;
    		
    		for (int j = 0; j < numFives; j++) {
    			runningCount += "5";
    		}
    		for (int j = 0; j < numThrees; j++) {
    			runningCount += "3";
    		}
    		cout << runningCount << endl;
    		continue;
    	}
    	else {
    		cout << -1 << endl;
    		continue;
    	}
    	
    }
    return 0;
}
