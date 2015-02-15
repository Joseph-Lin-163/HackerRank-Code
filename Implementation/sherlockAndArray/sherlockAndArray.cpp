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

    
    for (int j = 0; j < t; j++) {
    
    	
	    int leftsum = 0, rightsum = 0;
    	bool goRight;

    	int num;
    	cin >> num;
    	int a[num];
	    
	    for (int i = 0; i < num/2; i++) {
	    	cin >> a[i];
	    	leftsum += a[i];
	    }
	    
	    cin >> a[num/2];

	    for (int i = num/2 + 1; i < num; i++) {
	    	cin >> a[i];
	    	rightsum += a[i];
	    }

	    // cout << "leftsum: " << leftsum << " rightsum: " << rightsum << endl;
	    // for (int i = 0; i < num; i++) {
	    // 	cout << a[i];
	    // }
	    // cout << endl;
	    

		int position = num/2;
		if (rightsum > leftsum) {
			goRight = true;
			while (goRight) {
				leftsum += a[position];
				rightsum -= a[position+1];
				position++;
				if (leftsum > rightsum || position == (t-1)) {
					cout << "NO" << endl;
					break;
				}
				if (rightsum == leftsum) {
					cout << "YES" << endl;
					break;
				}
			}
			continue;
		}
    	else if (rightsum < leftsum) {
    		goRight = false;
    		while (!goRight) {
				leftsum -= a[position-1];
				rightsum += a[position];
				position--;
				if (leftsum < rightsum || position == 1) {
					cout << "NO" << endl;
					break;
				}
				if (rightsum == leftsum) {
					cout << "YES" << endl;
					break;
				}
			}
			continue;
    	}
    	else {
    		cout << "YES" << endl;
    		continue;
    	}

    	

	}


    return 0;
}
