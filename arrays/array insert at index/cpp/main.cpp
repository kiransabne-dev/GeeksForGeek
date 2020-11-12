#include <iostream>

using namespace std;

void insertAtIndex(int arr[], int sizeOfArray, int index, int element){
    if(index == sizeOfArray - 1){
        arr[index] = element;
    }
    for(int i = sizeOfArray - 1; i >= index; i--){
        //printf("%d\n", arr[i]);
        // while(arr[i] > index){
        //     arr[i] = arr[i-1];
        //     printf("%d\n", arr[i]);
        // }
        arr[i+1] = arr[i];
        //printf("%d\n", i);
        
    }
    arr[index] = element;

    for(int i = 0; i < sizeOfArray; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    cout << "" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int sizeOfArray = 6, index = 2, element = 90;
    insertAtIndex(arr, sizeOfArray, index, element);
    return 0;
}