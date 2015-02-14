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

    

    return 0;
}
