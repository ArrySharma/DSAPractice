#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            char a = 'A' + j + i - 2;
            cout<< " " << a ;
            j++;


        }
        cout<< endl;
        i++;



    }





}