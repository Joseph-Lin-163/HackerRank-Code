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
    	int a, b;
    	cin >> a >> b;
    	for (int i = 0;  ; i++) {
    		if (i*i >= a) {
    			int count = 0;
		    	for (int j = i; ; j++) {
		   			if ((j*j) <= b) {
		    			count++;
		    		}
		   			else {
		   				cout << count << endl;
		   				break;
		   			}
		   		}
		   		break;
	   		}
    	}
    }
    return 0;
}
