#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        int wrappers;
        answer = (n/c);
        wrappers = answer;

        while (wrappers != 0) {
            answer += wrappers/m;
            wrappers = (wrappers % m) + (wrappers/m);
            if (wrappers/m == 0)
                break;
        }
        cout<<answer<<endl;
    }
    return 0;
}
