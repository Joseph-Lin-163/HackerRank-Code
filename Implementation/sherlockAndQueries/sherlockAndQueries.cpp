#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, M;
    int mod = pow(10,9) + 7;
    cin >> N >> M;
    long a[N];
    int b[M], c[M];
    for (int i = 0; i < N; i++) {
    	cin >> a[i];
    }
    for (int i = 0; i < M; i++) {
    	cin >> b[i];
    }
    for (int i = 0; i < M; i++) {
    	cin >> c[i];
    }

    long temp = 1;
   	for (int i = 0; i < M; i++) {
   		if (i % b[i] == 0) {
   			temp *= c[i];
   		}
   	}

    for (int i = 0; i < N; i++) {
    	if (i % b[i] == 0) {
    		a[i] *= temp;
    	}
    }

    for (int i = 0; i < N; i++) {
    	cout << (a[i] % mod) << " ";
    }

    return 0;
}
