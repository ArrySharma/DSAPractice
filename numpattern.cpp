#include<iostream>
using namespace std;

int main(){

    int userinput;
    cin>> userinput;
    int numofints = userinput*userinput;
    int i = 1;
    int j = 1;

    while (i <= numofints)
    {
        if(i % userinput==0){
            cout<< " " << j << endl;
            j++;
        }
        else{
            cout << " " << j;
        }
    i++;
    }
}