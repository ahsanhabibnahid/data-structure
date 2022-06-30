#include<iostream>
using namespace std;

// arr[] = 4,8,2,7,6

void selectionSort(int arr[], int n) {

    int i, j, index_min,temp;
    for(i=0; i < n-1; i++){
        index_min = i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[index_min]){
                index_min = j;
            }
        }
        if(index_min != i){
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){

    int arr[] = {10,5,2,8,7,98,565,7,8,24,96};
    int n = sizeof(arr)/sizeof(int);
    selectionSort (arr, n);
    return 0;
}

