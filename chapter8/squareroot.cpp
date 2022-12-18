#include<iostream>
using namespace std;

int squareroot(int n){

    int i = 0;
    int j = n;

    int mid = i + (j - i)/2;
    int ans;

    while(i <= j){

        if((mid * mid) == n){
            return mid;
        }
        // cout<< mid << endl;
        if((mid * mid) > n){
            j = mid - 1;
            // cout<< j << endl;
        }
        
        else{
            i = mid + 1;
            ans = mid;
            // cout<< j << endl;
        }

        mid = i + (j - i)/2;
    }
    return ans;
}

int main(){


    int ans = squareroot(4);

    cout << ans;
}

