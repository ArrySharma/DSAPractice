#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 2;
    int j = 0;

    while(i<=n){
        j = j + i;
        i = i+2;
    }
    cout<<j;
}