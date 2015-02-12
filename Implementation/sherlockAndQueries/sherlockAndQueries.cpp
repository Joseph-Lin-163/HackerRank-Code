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
    long mod = pow(10,9) + 7;
    cin >> N >> M;
    long a[N];
    long b[M], c[M];
    for (int i = 0; i < N; i++) {
    	cin >> a[i];
    }
    for (int i = 0; i < M; i++) {
    	cin >> b[i];
    }
    for (int i = 0; i < M; i++) {
    	cin >> c[i];
    }

    // Feels like the overflow is what's getting to me
    // Need to figure out an easy solution to managing the overflow
    /*
    for (int i = 0; i < M; i++) {
        for (int j = 1; j <= N; j++) {
            if (j % b[i] == 0) {
                if (a[j-1] > mod) {
                    a[j-1] = a[j-1] % mod;
                    a[j-1] *= c[i];
                }
                else
                    a[j-1] *= c[i];
            }
        }
    }
    */
    // Attempt 2, got sample case, but still fail
    
    for (long i = 0; i < M; i++) {
       for (long j = b[i]; j <= N; j+= b[i]) {
            if (a[j-1] > mod) {
                a[j-1] = a[j-1] % mod;
                a[j-1] *= c[i];
            }
            else
                a[j-1] *= c[i];
        }
    }
    

    // Attempt 1, fail
    /*
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
    */
    int i;
    for (i = 0; i < N - 1; i++) {
    	cout << (a[i] % mod) << " ";
    }
    cout << (a[i] % mod);

    return 0;
}
