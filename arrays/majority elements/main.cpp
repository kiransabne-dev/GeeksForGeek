#include <iostream>

using namespace std;

int findMajority(int arr[], int n){
    int result = 0, count = 1;
    for(int i = 1; i < n; i++){
        if(arr[result] == arr[i]){
            count++;
        }else {
            count--;
        }

        if(count == 0){
            result = i;
            count = 1;
        }
    }
    printf("result %d\n", result);
    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[result] == arr[i]){
            count++;
        }
        
    }
    if(count <= n/2){
            result = -1;
        }
    printf("count %d\n ", count);
    return result;
}

int main(){
    cout << "hello" << endl;
    int arr[] = {6, 8, 4, 8, 8};
    int n = 5;
    int values = findMajority(arr, n);
    printf("%d\n", values);
    return 0;
}