//
//  main.cpp
//  Quick sort
//
//  Created by user on 2/17/24.
//
#include <iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int p=arr[low];
    int i,j;
    i=low;
    j=high;
    while(i<j){
        while(arr[i]<=p){
            i++;
        }
        while(arr[j]>p){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if (low<high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}


int main(int argc, const char * argv[]) {
    int arr[]={5,8,1,4,2,9,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
        
    return 0;
}
