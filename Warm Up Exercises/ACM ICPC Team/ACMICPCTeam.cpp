#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int binToInt(string bin, int M) {
	int sum = 0;
	for (int i = 0; i < M; i++) {
		sum += pow(2,i)*(bin[M-i-1] - 48);
	}
	return sum;
}

void intToBin(int num, int M, char *c) {
	while (num != 0) {
		if (num % 2 == 1) {
			num -= 1;
			num /= 2;
			c[--M] = '1';
		}
		else {
			num /= 2;
			c[--M] = '0';
		}
	}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    /*
		Note:
		This won't work for values where binToInt is greater than 2^31
		Unfortunately, I forgot the part of the problem where the length of binary string could be <= 100
		And there is no 16 byte data type for me to use to store all those 0's and 1's
		This will work for strings of binary where the length is <= 31

		I might come back to this in the future. For now, I want to move onto a different problem.
    */
    int N, M;
    cin >> N;
    cin >> M;
    string *temp = new string[N];
    int bin[N];

    for (int i = 0; i < N; i++) {
    	cin >> temp[i];
    }
    
    for (int i = 0; i < N; i++) {
    	bin[i] = binToInt(temp[i], M);
    }

    int count = 0;
    int currentMax = 0;
    int numTopics = 0;

    for (int i = 0; i < N; i++) {
    	for (int j = i+1; j < N; j++) {
    		int temp = bin[i] | bin[j];
    		if (currentMax < temp) {
    			currentMax = temp;
    			count = 1;
    		}
    		else if (currentMax == temp)
    			count++;
    	}
    }
    char *backToBin = new char[M];
    intToBin(currentMax, M, backToBin);
    for (int i = 0; i < M; i++) {
    	if (backToBin[i] == '1')
    		numTopics++;
    }
    cout << numTopics << endl << count;
    
    delete [] temp;
    delete [] backToBin;
    return 0;
}
