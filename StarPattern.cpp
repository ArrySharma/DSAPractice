#include<iostream>
using namespace std;

int main(){

    // cout<< "X X X X\nX X X X\nX X X X\nX X X X"<< endl;

    int i;
    cin>>i;
    int numstars = (i*i);
    int j = 1;

    while(j<=numstars){
        if(j%i==0){
            cout<< " X " << endl;
        }
        else{
            cout<< " X ";
        }
        j++;
    }

}