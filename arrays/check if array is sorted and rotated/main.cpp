// Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated.
// A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.

// Example 1:

// Input:
// N = 4
// arr[] = {3,4,1,2}
// Output: Yes
// Explanation: The array is sorted 
// (1, 2, 3, 4) and rotated twice 
// (3, 4, 1, 2).

// find the min element
// all eelents before min elem should be in increasing order
// all elements after min elem should be in increasing order
// last element should be smaller then first eleemnt

#include <iostream>

using namespace std;

void checkRotatedAndSorted(int arr[], int num){
    // find minimum elemnt & its index
    int minElem = arr[0];
    int minIndex = 0;
    int maxElem = arr[0];
    int maxIndex = 0;
    for(int i = 1; i < num; i++){
        if(arr[i] > maxElem){
            maxElem = arr[i];
            maxIndex = i;
        }
        if(arr[i] < minElem){
            minElem = arr[i];
            minIndex = i;
        }
    }
    printf("min %d\n %d\n", minIndex, maxIndex);
    string order;
    if(maxIndex < minIndex){
        order = "asc";
    } else if(maxIndex > minIndex){
        order = "desc";
    }
    cout << order << endl;
    if(order == "asc"){
        // check if all elements before minimum element is in increasing order
        int flag1 = 1;
        for(int i = 1; i < minIndex; i++){
            if(arr[i] < arr[i-1]){
                flag1 = 0;
                break;
            }
        }

        // check if all elements after minimum elements is in increasing order
        int flag2 = 1;
        for(int i = minIndex + 1; i < num; i++){
            if(arr[i] < arr[i-1]){
                flag2 = 0;
                break;
            }
        }
        printf("flag1 -> %d\n", flag1);
        printf("flag2 -> %d\n", flag2);
        if(flag1 == 1 && flag2 == 1 && (arr[num-1] < arr[0])){
            printf("Yes");
        } else {
            printf("No");
        }
    } else if(order == "desc"){
        int flag1 = 1;
        for(int i = 1; i < maxIndex; i++){
            if(arr[i] > arr[i-1]){
                flag1 = 0;
                break;
            }
        }

        int flag2 = 1;
        for(int i = maxIndex+1; i < num; i++){
            if(arr[i] > arr[i-1]){
                flag2 = 0;
                break;
            }
        }
        printf("flag1 -> %d\n", flag1);
        printf("flag2 -> %d\n", flag2);
        if(flag1 == 1 && flag2 == 1 && (arr[num-1] > arr[0])){
            printf("Yes");
        } else {
            printf("No");
        }
    }
}

int main(){
    cout << "" << endl;
    int arr[] = {30, 20, 10, 50, 35};
    int n = 5;
    checkRotatedAndSorted(arr, n);
    return 0;
}