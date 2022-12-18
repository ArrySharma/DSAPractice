#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int k = 0; k<size; k++){
    cout<< " " << arr[k];
}
}

void swapper(int arr[], int size){

    for(int i = 0; i < size; i = i +2){
        if(i + 1 < size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printArray(arr,size);
    
}



int main(){


    int arr[6] = {1,2,3,4,5,6};
    
    swapper(arr,6);
}
