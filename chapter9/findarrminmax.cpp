#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << endl;
    }
}

int maxArray(int arr[], int size){
    int numOne = arr[0];
    for(int i = 1; i<size; i++){
        int numTwo = arr[i];
        if(numTwo > numOne){
            numOne = numTwo;
        }
    }
    return numOne;
}

int minArray(int arr[], int size){
    int numOne = arr[0];
    for(int i = 1; i<size; i++){
        int numTwo = arr[i];
        if(numTwo < numOne){
            numOne = numTwo;
        }
    }
    return numOne;
}



int main(){

    int size;
    int arr[100];
    cin >> size;

    cout<< "Enter " << size << " values" << endl;
    
    for(int i = 0; i<size; i++){
        cin>> arr[i];
    }

    int max = maxArray(arr, size);
    int min = minArray(arr, size);
    cout<< max << " " <<  min;
}