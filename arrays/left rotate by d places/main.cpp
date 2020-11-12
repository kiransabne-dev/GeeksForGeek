#include <iostream>

using namespace std;

void rotateByD(int arr[], int d, int n){
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    // now move by d spaces
    for(int j = d; j < n; j++){
        arr[j-d] = arr[j];
    }

    // from temp to arr
    for(int i = 0; i < d; i++){
        arr[n-d+i] = temp[i];
    }
}

int main(){
    cout << "hrllo" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int d = 2, n = 5;
    rotateByD(arr, d, n);
    printf("after moving d places -> \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}