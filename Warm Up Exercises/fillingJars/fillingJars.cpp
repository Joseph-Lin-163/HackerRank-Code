#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int M, N;
    cin >> N;
    cin >> M;
    /*
    int jars[N];
    for (int i = 0; i < M; i++) {
    	int firstJar, secondJar, candies;
    	cin >> firstJar;
    	cin >> secondJar;
    	cin >> candies;
    	for (int j = firstJar-1; j < secondJar; j++) {
    		jars[j] += candies; 
    	}
    }
    */

    // Thought of a faster solution just now

    long total;
    for (int i = 0; i < M; i++) {
    	long first, second, candies;
    	cin >> first;
    	cin >> second;
    	cin >> candies;
    	total += (second - first + 1)*candies;
    }
    cout << total / N << endl;

    return 0;
}
