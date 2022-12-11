#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Please enter the desired the number: ";
    cin>>n;
    int i = 2;

   
    while(i<n && n%i!=0){
        i = i + 1;        
    }
    if(i>=n){
        cout<< n << " is a prime number!";
    }
    else{
        cout<< n << " is not a prime number";
    }
    
}
