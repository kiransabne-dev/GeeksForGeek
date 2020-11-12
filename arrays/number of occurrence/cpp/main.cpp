#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int n, int x){
  if(r >= l){
    int mid = l + (r - l) / 2;
    if(arr[mid] == x){
      int start = mid;
      int end = mid;
      while(arr[start] == x || arr[end] == x){
        if(arr[start] == x){
          start--;
        }
        if(arr[end] == x){
          end++;
        }
      }
      return (end - 1) - (start + 1) + 1;
    } else if(arr[mid] > x){
      return binarySearch(arr, l, mid - 1, n, x);
    } else {
      return binarySearch(arr, mid+1, r, n, x);
    }
  }
  return 0;
}
  //return 0;



int main() {
  int arr[] = {1,2,2,2,2,2,2,2,3,3,3,4,4,5, 14, 17, 20};
  int n = 17;
  int k = 100;
  int values = binarySearch(arr, 0, n-1, n, k);
  printf("values -> %d\n", values);
  // 3, 4, 5, 1, 2
  //rotateArrayByKPlaces(arr, n, k);
}
