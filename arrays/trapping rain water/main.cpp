#include <iostream>

using namespace std;

int rainWater(int arr[], int n){
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for(int i = 1; i < n ; i++){
        lmax[i] = max(arr[i], lmax[i-1]);
    }

    rmax[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        rmax[i] = max(arr[i], rmax[i+1]);
    }

    cout << " lmax "<< endl;
    for(int i = 0; i < n; i++){
        printf("%d\n", lmax[i]);
    }

    cout << "rmax " << endl;
    for(int i = 0; i < n; i++){
        printf("%d\n", rmax[i]);
    }

    int units = 0;
    for(int i = 0; i < n; i++){
        units += min(lmax[i], rmax[i]) - arr[i];
    }

    return units;
}

int main(){
    cout << "Hello!!!" << endl;
    int arr[] = {5, 0, 6, 2, 3};
    int n = 5;
    int units = rainWater(arr, n);
    printf("units %d\n", units);
    return 0;
}