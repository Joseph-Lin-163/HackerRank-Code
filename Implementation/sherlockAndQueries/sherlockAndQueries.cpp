#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    // Clearly, this code is wrong, I will revise it as soon as I finish studying
    // for my classes.

    /*
        Implementation goes along the lines of:
        for (int i = 0; i < M; i++) {
            for (int j = B[i]; j < N; j+= B[i]) {
                A[j] *= C[i];
            }
        }

        The idea is that we have a single computation per term,
        A = a1 * a2 * a3 * ... * an
        Where A is the product of the terms a1 through an.
    */
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
    int j = 1;
   	for (int i = 0; i < M; i++) {
   		if (j % b[i] == 0) {
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
