#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int k = 0; k<size; k++){
    cout<< " " << arr[k];
}
}

void arrsort(int arr[], int size){

    int i = 0;
    int j = size -1;
    int m = 1;

    while(m<j){

        while(arr[i] == 0){
            i++;
        }
        while(arr[j] == 2){
            j--;
        }
        if(arr[m] == 0){
            
            swap(arr[i],arr[m]);
            i++;
            
        }
        if(arr[m] == 2){
            
            swap(arr[j],arr[m]);
            j--;
            
        }
        m++;

    }
    
}









int main(){

    int arr[15] = {0,2,1,2,2,0,0,1,1,0,1,1,2,0,1};

    arrsort(arr,15);
    printArray(arr,15);
}