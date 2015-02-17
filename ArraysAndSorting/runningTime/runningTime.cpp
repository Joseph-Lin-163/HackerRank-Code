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
    #include <vector>
    #include <cstdlib>
    #include <numeric>
    #include <sstream>
    #include <iostream>
    #include <algorithm>
    using namespace std;

    // Keeps track of number of shifts

    void output(vector <int> ar) {
        for (int i = 0; i < ar.size(); i++) {
            cout << ar[i] << " ";
        }
    }

    void swap(vector <int> ar, int index1, int index2) {
        int temp = ar[index1];
        ar[index1] = ar[index2];
        ar[index2] = temp;
    }

    void insertionSort(vector <int>  ar) {
        int var;
        var = ar[0];
        int count = 0;
        for (int i = 1; i < ar.size(); i++) {
            int tempi = i; 
            var = ar[i-1];
            if (ar[tempi-1] > ar[tempi]) {
                while (ar[tempi-1] > ar[tempi]) {
                    int temp = ar[tempi];
                    ar[tempi] = ar[tempi-1];
                    ar[tempi-1] = temp;
                    tempi--;
                    count++;
                }
                // output(ar);
                // cout << endl;
                var = ar[i];
                
            }
            else {
                //output(ar);
                var = ar[i];
                //cout << endl;
            }

        }

        cout << count << endl;
    }

    int main(void) {
        vector <int>  _ar;
        int _ar_size;
        cin >> _ar_size;
        
        for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
            int _ar_tmp;
            cin >> _ar_tmp;
            _ar.push_back(_ar_tmp); 
        }

        insertionSort(_ar);
       
       return 0;
    }
