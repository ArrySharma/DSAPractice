#include<iostream>
using namespace std;

bool numCheck(int arr[], int size, int numcheck){
    for(int i = 0; i<size; i++){
        if(numcheck == arr[i]){
            return true;
        }
        
    }
    return false;
}


int main(){

    int num;
    cout<< "Number lookup: ";
    cin>> num;

    int arr[10] = {1,2,3,6,7,8};

    bool a = numCheck(arr, 6, num);

    if(a){
        cout<< "Yes " << num << " is present";
    }
    else{
        cout<< "No " << num << " is absent";
    }

    
    
}