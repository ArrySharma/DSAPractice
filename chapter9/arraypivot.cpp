#include<iostream>
using namespace std;

int pivot(int arr[], int size){

    int sum = 0;
    for(int i = 0; i < size -1; i++){
        sum = sum + arr[i];
    }
    
    int lsum = 0;
    for(int j = 0; lsum <= sum;  j++ ){

        if(lsum == sum){
            return j;
        }
        sum = sum - arr[j];

        if(lsum == sum){
            return j;
        }
        
        lsum = lsum + arr[j];
        
    }
    return -1;

    
}

int main(){

    int arr[6] = {1,7,3,6,5,6};

    int ans = pivot(arr, 6);

    cout << ans;
}