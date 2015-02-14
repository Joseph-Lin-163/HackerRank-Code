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
    int cavMap[n][n];

    for (int i = 0; i < n; i++) {
    	string temp;
    	cin >> temp;
    	for (int j = 0; j < n; j++) {
    		//int mod = pow(10,n-j);
    		//cavMap[i][j] = (temp % mod)/(mod/10);
    		cavMap[i][j] = temp[j] - 48;
    	}
    }

    /*
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		cout << cavMap[i][j];
    	}
    	cout << endl;
    }
    */
    
    for (int i = 1; i < n - 1; i++) {
    	for (int j = 1; j < n - 1; j++) {
    		if ((cavMap[i-1][j] == -1) || (cavMap[i+1][j] == -1) || (cavMap[i][j-1] == -1) || (cavMap[i][j+1] == -1))
    			continue;

    		if ((cavMap[i][j] > cavMap[i-1][j]) && (cavMap[i][j] > cavMap[i+1][j]) &&
    			(cavMap[i][j] > cavMap[i][j-1]) && (cavMap[i][j] > cavMap[i][j+1]))
    			cavMap[i][j] = -1;
    	}
    }

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		if (cavMap[i][j] == -1)
    			cout << 'X';
    		else
    			cout << cavMap[i][j];
    	}
    	cout << endl;
    }
    

    return 0;
}
