#include<iostream>
using namespace std;

bool isPossible(int yard[], int numstalls, int numcows, int midstalls){

      int cowcount = 1;
      int lastpos = yard[0];

      for(int i = 0; i < numstalls; i++)
        if(yard[i] - lastpos >= midstalls){
            cowcount++;
            if(cowcount == numcows){
                return true;
            }
            lastpos = yard[i];
        }
      return false;

}

int main(){

    int  arr[5] = {1, 2, 3, 4, 6};

    int start = 0;

    int end = 6;

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(isPossible(arr,5,2,mid)){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    cout << ans;

}

