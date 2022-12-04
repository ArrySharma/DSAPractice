#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>> n;
    int i = 1;
    char counter = 'A';
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<< " " <<counter;
            counter++;
            j++;

        }
        i++;
        cout<< endl;


    }





}