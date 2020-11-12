#include <iostream>

using namespace std;

void printLeaders(int arr[], int n){
    int max = arr[n-1];

    printf("%d\n", max);

    for(int i = n - 2; i >= 0; i--){
        if(arr[i] >= max){
            max = arr[i];
            printf("%d\n", max);
        }
    }
}


int main(){
    cout << " " << endl;
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;
    printLeaders(arr, n);
    return 0;
}