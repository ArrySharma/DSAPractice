#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j =1;
        // char a = 'A' + i - 1;
        while (j<=i){
            char a = 'A' + i - 1;
            cout<< " " <<a;
            j++;
        }
        cout<<endl;
        i++;

    }




}