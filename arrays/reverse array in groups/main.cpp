#include <iostream>

using namespace std;

void reverseArrayInGroup(int arr[], int k, int n){
    for(int i = 0; i < n; i+=k){
        int left = i;
        int right = min(i + k - 1, n - 1);
        while(left < right){
            swap(arr[left++], arr[right--]);
        }

    }

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}


int main(){
    cout << " " << endl;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int k = 3, n = 6;
    reverseArrayInGroup(arr, k, n);
    return 0;
}