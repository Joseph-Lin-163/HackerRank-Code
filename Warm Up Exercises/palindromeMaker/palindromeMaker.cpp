#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    string s;
    for (int i = 0; i < T; i++) {
    	int count = 0;
    	cin >> s;
    	int length = s.length();
    	if (length % 2 == 1) { 
    		for (int j = 0; j < length/2; j++) {
    			char first = s[j];
    			char second = s[(length/2) + ((length/2)-j)];
    			if (first < second)
    				count += second - first;
    			else if (second < first)
    				count += first - second;
    		}
    	}
    	else {
    		for (int j = 0; j < length/2; j++) {
    			char first = s[j];
    			char second = s[(length/2) + ((length/2)-j-1)];
    			if (first < second)
    				count += second - first;
    			else if (second < first)
    				count += first - second;
    		}
    	}
    	cout << count << endl;
    }
    return 0;
}
