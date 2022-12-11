#include<iostream>
using namespace std;

int arrSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size ; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int arr[10] = {1,2,3,6,7,8};

    int sum = arrSum(arr, 2);

    cout<< sum ;

    
}