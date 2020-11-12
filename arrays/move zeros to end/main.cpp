#include <iostream>

using namespace std;



int main(){
    cout << "hello" << endl;
    int arr[] = {10, 8, 0, 0, 12, 0};
    int n = 6, count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }

    return 0;
}