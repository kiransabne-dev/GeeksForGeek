#include <iostream>

using namespace std;

void waveArray(int arr[], int n){
    for(int i = 0; i < n-1; i+=2){
      //  printf("%d\n", arr[i]);
        swap(arr[i], arr[i+1]); 
    } 

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    cout <<  " " << endl;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    waveArray(arr, n);
    return 0;
}
