#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    /*
		Note:
		This won't work for values where binToInt is greater than 2^31
		Unfortunately, I forgot the part of the problem where the length of binary string could be <= 100
		And there is no 16 byte data type for me to use to store all those 0's and 1's
		This will work for strings of binary where the length is <= 31

		I might come back to this in the future. For now, I want to move onto a different problem.

        ------------------------------------------------------------------------------------------------

        Okay, my friend Jinsol Jung recommended that I use bitsets.
        This was a great suggestion on his part since it allowed by to bypass the primitive data type 
        data limitations. Instead of being limited to only 8 bytes, I have a bitset of size 500 (max value).
        I used 500 and sacrificed space so that I could cover all the cases.
        In addition, my algorithm still runs on the input M and N (as shown in the for-loops)
        And, yes, I did have to add one more for loop, but this is relatively trivial.
        The test cases run in, at most, 0.11 seconds on HackerRank servers.

        Credit to Jinsol Jung for the recommendation of bitset.
    */
    int N, M;
    cin >> N;
    cin >> M;
    bitset<500> bitStrings[500];

    for (int i = 0; i < N; i++) {
    	cin >> bitStrings[i];
    }

    int count = 0;
    int currentMax = 0;
    int numTopics = 0;

    for (int i = 0; i < N; i++) {
    	for (int j = i+1; j < N; j++) {
            int temp = 0;
    		bitset<500> tempBitset = bitStrings[i] | bitStrings[j];
            for (int k = 0; k < M; k++) {
                if(tempBitset[k] == 1)
                    temp++;
            }

    		if (currentMax < temp) {
    			currentMax = temp;
    			count = 1;
    		}
    		else if (currentMax == temp)
    			count++;
    	}
    }

    cout << currentMax << endl << count;
    
    return 0;
}
