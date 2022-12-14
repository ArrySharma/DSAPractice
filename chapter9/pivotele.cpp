#include<iostream>
using namespace std;

int pivotel(int arr[], int size){

    int i = 0;
    int j = size - 1;
    int mid = i + (j - i)/2;

    while(i<j){

        if(arr[mid] > arr[0]){
            i = mid + 1;
        }
        else{
            j = mid;
        }
        mid = i + (j - i)/2;
    }
    return j;

}

int targetfind(int arr[], int size, int target){

    int i = 0;
    int j = size - 1;
    
    int pivot = pivotel(arr, size);

    if(arr[pivot] <= target && target <= arr[size-1] ){
            i = pivot;
            // cout<< i;
        }
    else{
            j = pivot - 1;
            // cout << j;
        }
        int mid = i + (j - i)/2;
        // cout<< mid;
    while(i<=j){

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            i = mid + 1;
        }
        else{
            j = mid;
        }
        mid = i + (j - i)/2;
    }

}

int main(){

    int arr[10] = {8,9,10,11,1,2,3,4,5,6};

    // int pivot = pivotel(arr, 10);
    int ans = targetfind(arr, 10, 8);

    // cout << pivot << endl;
    cout << ans;
}