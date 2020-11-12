#include <iostream>
#include <vector>

using namespace std;

vector<int> largestAndSecondLargest(int n, int arr[]){
    vector<int> values;
    int second = -1, first = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[first]){  
            second = first;
            first = i;
        } else if (arr[i] != arr[first]){
            if(second == -1 || arr[i] > arr[second]){
                second = i;
            }
        }
    }

    
    printf("values -> %d %d", first, second);
    values.push_back(arr[first]);
    values.push_back(arr[second]);
    return values;
}

int main(){
    cout << "" << endl;
    int arr[] = {10, 40, 30, 15, 5, 100};
    int n = 6;
    vector<int> values = largestAndSecondLargest(n, arr);
    return 0;
}