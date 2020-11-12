#include <iostream>

using namespace std;

void reverseArray(int arr[], int n){
    int low = 0, high = n-1;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}


int main(){
    cout << "hello" << endl;
    int arr[] = {10, 5, 7, 30};
    reverseArray(arr, 4);
    return 0;
}