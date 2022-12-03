#include<iostream>
using namespace std;

int main(){

    char selection;
    double f;
    double c;

    cout<< "Please select c or f: ";
    cin>>selection;


    if(selection == 'f'){
    
    cout << "Enter temperature in F: ";
    cin>> f;

    double c = (f-32)*0.5552;
    cout<< f << " F degrees in C is: "<< c << endl;
    }

    else if(selection == 'c'){
    
    cout << "Enter temperature in C: ";
    cin >> c;

    double f = (c*1.8)+32;
    cout<< c << " C degrees in f is: "<< f << endl;
    }
    else{
        cout << " Wrong value";
    }
    
    
}