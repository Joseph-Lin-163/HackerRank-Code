#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(vector < int > a) {
    int toRet;
    int keepTrack[101];
    for (int i = 0; i < 101; i++) {
        keepTrack[i] = 2;
    }
    for (int i = 0; i < a.size(); i++) {
        keepTrack[a[i]]--;
    }
    for (int i = 0; i < 101; i++) {
        if (keepTrack[i] %2 == 1) {
            toRet = i;
            break;
        }
    }  
    return toRet;

}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
