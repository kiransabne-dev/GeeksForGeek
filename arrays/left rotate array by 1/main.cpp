#include <iostream>

using namespace std;

int main(){
    cout << " hello " << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int temp = arr[0], n = 5;
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n - 1] = temp;

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}