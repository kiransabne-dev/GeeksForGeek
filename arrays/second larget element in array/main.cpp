#include <iostream>

using namespace std;

int main(){
    cout << "hello" << endl;
    int arr[] = {5, 20, 12, 20, 8};
    int res = -1, largest = 0;
    for(int i = 1; i < 5; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        } else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
        }
    }
    printf("%d\n", res);
    return res;
}