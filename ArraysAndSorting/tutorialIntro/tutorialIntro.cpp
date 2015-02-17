#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
	Sorry about the lack of pushes to GitHub, I've been busy over the last few days
	because of Valentine's Weekend. I will push more today to compensate for the lack of pushes
	during the weekend.
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num, size;
    cin >> num >> size;
    int temp;
    for(int i = 0; i < size; i++) {
    	cin >> temp;
    	if (temp == num) {
    		cout << i << endl;
    		break;
    	}
    }
    return 0;
}
