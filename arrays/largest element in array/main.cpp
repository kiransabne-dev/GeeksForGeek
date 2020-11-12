#include <iostream>

using namespace std;

int main(){
    cout << "hello" << endl;
    int arr[] = {5, 8, 20, 10};
    int res = 0;
    for(int i = 1; i < 4; i++){
        printf("%d\n", arr[i]);
        if(arr[i] > arr[res]){
            res = i;
        }
    }
    printf("res -> %d\n", res);
    return 0;
}