#include<iostream>
using namespace std;

bool ifPossible(int arr[], int unit, int numpainters, int mid){

    int numboards = 0;
    int painter = 1;

    for(int i = 0; i < unit; i++){

        if(numboards + arr[i] <= mid){
            numboards = numboards + arr[i];
        }
        else{
            painter++;
            if(painter > numpainters || arr[i] > mid){
                return false;
            }
            numboards = arr[i];
        }

    }
    return true;
}

int main(){

    int arr[4] = {10,20,30,40};

    int startboard = 0;
    int endboard = 0;

    for(int i = 0; i < 4; i++){
        endboard = endboard + arr[i];
    }

    int mid = startboard + (endboard - startboard)/2;

    int ans = -1;

    while(startboard <= endboard){

        if(ifPossible(arr, 4, 2, mid)){
            ans = mid;
            endboard = mid - 1;
        }
        else{
            startboard = mid + 1;
        }

        mid = startboard + (endboard - startboard)/2;
    }
    cout<< ans;
}