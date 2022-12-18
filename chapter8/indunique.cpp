#include<iostream>
using namespace std;

int findunique(int arr[], int size){

    // int i = 0;
    // while(i < size){
    //     int j = 0;
    //     int c = 0;
    //     while(j < size){
    //         if(arr[i] == arr[j]){
    //             c++;
    //         }
    //         j++;
    //     }
    //     if(c == 1){
    //         return arr[i];
    //     }
    //     i++;

    // }
        int ans = 0;

        for(int i = 0; i < size; i++){
            ans = ans^arr[i];
        }
        return ans;
        
        
}



int main(){

    int arr[5] = {4,2,2,4,3};

    int answer = findunique(arr,5);

    cout << answer;

}