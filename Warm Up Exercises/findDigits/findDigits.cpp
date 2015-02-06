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
    	long N;
    	int count = 0;
    	string Ns;
    	cin >> Ns;
    	N = stol(Ns);
    	for (int j = 0; j < Ns.length(); j++) {
    		if ((Ns[j]-48) != 0 && N % (Ns[j]-48) == 0)
    			count++;
    	}
    	cout << count << endl;
    }
    return 0;
}
