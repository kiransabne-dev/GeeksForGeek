#include <iostream>

using namespace std;

int main(){
    cout << "hello" << endl;
    int res = 1;
    int arr[] = {10, 20, 20, 30, 30, 30}, n= 6;
    for(int i = 1; i < n; i++){
        if(arr[res-1] != arr[i]){
            arr[res] = arr[i];
            res++;
        }
    }
    printf("%d\n", res);
    return  0;
}