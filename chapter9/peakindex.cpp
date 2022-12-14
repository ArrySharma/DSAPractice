#include<iostream>
using namespace std;

int peakindex(int arr[], int size){

    int i = 0;
    int j = size - 1;

    while(i < j){
        int mid = i + (j - i)/2;

        if(arr[mid - 1] < arr[mid] > arr[mid + 1] ){
            return mid;
            break;
        }
        else if(arr[mid] < arr[mid + 1]){
            i = mid + 1;
        }
        else{
            j = mid;
        }
    }

}




int main(){

    int arr[7] = {2,3,5,4,3,2,1};

    int a = peakindex(arr, 7);

    cout<< a ;
}