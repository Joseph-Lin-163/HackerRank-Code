#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

void merge(int a [], const int low, const int mid, const int high) {
    int *convergingArray = new int[high+1-low];
    int lowerIndex = low;
    int i = 0;
    int higherIndex = mid+1;

    while( (lowerIndex <= mid) && (higherIndex <= high) )
    {
        if(a[lowerIndex] <= a[higherIndex])
        {
            convergingArray[i] = a[lowerIndex];
            lowerIndex++;
        }
        else
        {
            convergingArray[i] = a[higherIndex];
            higherIndex++;
        }
        i++;
    }

    // fill in if one array half runs out early
    if(lowerIndex > mid)
    {
        for(int k = higherIndex; k < high+1; k++)
        {
            convergingArray[i] = a[k];
            i++;
        }
    }
    else
    {
        for(int k = lowerIndex; k < mid+1; k++)
        {
            convergingArray[i] = a[k];
            i++;
        }
    }
    
    // put back into array
    for(int k = 0; k < high - low + 1; k++) 
    {
        a[k+low] = convergingArray[k];
    }
    delete [] convergingArray;
}

void mergeSort (int a [], const int low, const int high) {
    int mid;
    if (low < high) {
        mid = (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness, low, high;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++) {
        cin >> candies[i];

        if (i == 0) {
            low = candies[i];
            high = candies[i];
        }
        else {
            if (low > candies[i])
                low = candies[i];
            if (high < candies[i])
                high = candies[i];
        }

    }
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    // sort numbers, find min by iterating N-K, nlogn + n
   
    mergeSort(candies,0,N-1);
    
    for (int i = 0; i < N-K+1; i++) {
        if (i == 0) 
            unfairness = candies[i+K-1] - candies[i];
        else if (unfairness > candies[i+K-1] - candies[i])
                unfairness = candies[i+K-1] - candies[i];
    }

    cout << unfairness << "\n";
    /*
    MergeSort test
    int a[10] = {3,4,5,2,1,6,8,0,7};
    mergeSort(a,0,8);
    for (int i = 0; i < 9; i++) {
        cout << a[i] << endl;
    }
    */
    return 0;
}
