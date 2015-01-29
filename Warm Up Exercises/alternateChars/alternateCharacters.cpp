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
    string s;
    cin >> T;
    for (int i = 0; i < T; i++) {
    	cin >> s;
    	char temp = s[0];
    	int count = 0;
    	for (int j = 1; j < s.length(); j++) {
    		if (temp == s[j])
    			count++;
    		else
    			temp = s[j];
    	}
    	cout << count << endl;
    }
    return 0;
}
