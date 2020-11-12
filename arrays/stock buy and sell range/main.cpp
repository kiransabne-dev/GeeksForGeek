// The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

// Example 1:

// Input:
// N = 7
// A[] = {100,180,260,310,40,535,695}
// Output: (0 3) (4 6)
// Explanation: We can buy stock on day 
// 0, and sell it on 3rd day, which will 
// give us maximum profit. Now, we buy 
// stock on day 4 and sell it on day 6.

#include <iostream>

using namespace std;

struct Interval {
    int buy; 
    int sell;
};

void stockBuySell(int arr[], int n){
    if (n == 1){
        return;
    }

    int i = 0;
    while(i < n-1){
        while((i < n - 1) && (arr[i+1] <= arr[i])){
            i++;
        }

        if(i == n -1){
            break;
        }

        int 
    }

}

int main(){
    cout << "" << endl;
    // int arr[] = {100, 180, 260, 310, 40, 535, 695};
    // int n = 7


    int arr[] = {4, 2, 2, 2, 4};
    int n = 5;

    return 0;
}