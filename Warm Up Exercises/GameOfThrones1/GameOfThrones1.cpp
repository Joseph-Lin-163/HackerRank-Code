#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct letAndNum {
	char c;
	int n;
};

int main() {
   
    string s;
    cin>>s;
    int keepTrack[26];
    for (int i = 0; i < 26; i++) {
    	keepTrack[i] = 0;
    }
    for (int i = 0; i < s.length(); i++) {
    	keepTrack[s[i]-97]++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
    	if (keepTrack[i] % 2 == 1) {
    		count++;
    	}
    }

    int flag = 0;
    if (count > 1)
    	flag = 0;
    else
    	flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0) 
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
