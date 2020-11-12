#include <iostream>

using namespace std;

int maxLength(int arr[], int n){
    int res = 1, curr = 1;
    for(int i = 1; i < n; i++){
        if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || 
        (arr[i] % 2 != 0 && arr[i-1] % 2 == 0)){
            curr++;
            res = max(res, curr);
        } else{
            curr = 1;
        }
    }
    return res;
}

int main(){
    cout << "" << endl;
    int arr[] = {5, 10, 20, 6, 3, 8};
    int n = 6;
    int values = maxLength(arr, n);
    printf("values %d\n", values);
    return 0;
}