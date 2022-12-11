#include<iostream>
using namespace std;

int arrayRev(int arr[], int size){

    int arra[size] = {0};

    for(int i = 0, j = size-1; i<size; i++, j--){
        swap(arra[j],arr[i]);
    }
    for(int k = 0; k<size; k++){
    cout<< " " << arra[k];
}
}
int arrayRev2(int arr[], int size){    

    for(int i = 0, j = size-1; i<j; i++, j--){
        swap(arr[j],arr[i]);
    }
    
}
void printArray(int arr[], int size){
    for(int k = 0; k<size; k++){
    cout<< " " << arr[k];
}
}



int main(){

    int arr[6] = {6,5,4,3,2,1};
    arrayRev2(arr,6);
    printArray(arr,6);
    cout << endl;
    // arrayRev(arr,6);


}