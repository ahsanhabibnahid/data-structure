#include<iostream>
using namespace std;

// arr = {1,2,3,4,5,6,7,8,9,10};
// numberOfArray = sizeof(arr) / sizeof(int);
// searchValue = 3;

int binary_search_iterative(int arr[], int numberOfArray, int searchValue){

    int left = 0;
    int right = numberOfArray - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == searchValue){
            return mid;
        }
        if(arr[mid]<searchValue){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}



int main (void) {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int numberOfArray = sizeof(arr) / sizeof(int);
    int searchValue = 5;
    int result = binary_search_iterative(arr, numberOfArray, searchValue);
    (result == -1) ?  cout << "Element is not present in array"
                   :  cout << "Element is present at index " << result;

    return 0;
}

