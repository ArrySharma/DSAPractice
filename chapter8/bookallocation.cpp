#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

   int student = 1;
   int pagesum = 0;

        for(int booknum = 0; booknum < n; booknum++){

            if(pagesum + arr[booknum] <= mid){
                pagesum = pagesum + arr[booknum];
                
            }
            else{
            student++;
            if(student > m || arr[booknum] > mid){
                return false;
            }
            pagesum = arr[booknum];
            }      
            
        }
        return true;
    }
    


int main(){

    
    int arr[4] = {10, 20, 30, 40};

    int totalpages = 0;

    for(int i = 0; i <= 3; i++){
        totalpages = totalpages + arr[i];
    }
    // cout<< totalpages;
    
    int start = 0;
    int end = totalpages;

    int mid = start + (end - start)/2;
    // cout << mid;
    int answer = -1;

    while(start <= end){
        // cout<< answer;
        if(isPossible(arr,4,2,mid)){
            answer = mid;
            end = mid - 1;
            // cout<< answer<< " y " << 6 << " y";
            // cout<< " " << end << " "; 
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
        cout<< " " << mid << " ";
    }

    cout<< answer;
}