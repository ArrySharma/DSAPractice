 #include <iostream>
 using namespace std;

 int main(){
    // This is what I coded blindly
    // int a = 55;
    // int b = 8;
    // if (a>b){
    //     cout << "A is big" << endl;
    // }
    // else{
    //     cout << "B is big" << endl;
    // }


/*
Important to remember!
cout is for displaying output
cin is for taking in put
code will not move forward if not input is recieved
c>>n;
*/
    int n;
    cin>>n;
    // cout<< "Value of n is: " << n << endl; 

    // if a is positive
    if(n>0){
        cout << "N is positive" << endl;
    }
    else{
        cout << "N is Negative" << endl;
    }
 }