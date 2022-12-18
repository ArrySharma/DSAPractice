#include<iostream>
using namespace std;

bool ispossible(int collection[], int numbooks, int numstudents, int mid){

    int studentcount = 1;
    int numpages = 0;

    for(int bookscount = 0; bookscount < numbooks; bookscount++){
        if(numpages + collection[bookscount] <= mid){
            numpages = numpages + collection[bookscount];
        }
        else{
            studentcount++;
            if(studentcount > numstudents || collection[bookscount] > mid){
                return false;
            }
            numpages = collection[bookscount];
        }
    }
    return true;
}

int main(){

    int arr[4] = {10,20,30,40};

    int countstart = 0;
    int countend = 0;

    for(int booknum = 0; booknum <=  4 - 1; booknum++){
        countend = countend + arr[booknum];
    }
    
    int mid = countstart + (countend - countstart)/2;
    int ans = -1;
while(countstart <= countend){
    if(ispossible(arr,4,2,mid)){
        ans = mid;
        countend = mid - 1;
        cout<< countend << "end" << endl;
    }
    else{
        countstart = mid + 1;
        cout<< countstart << "start" << endl;
    }
    cout << "B " << mid << endl;
    mid = countstart + (countend - countstart)/2;
    cout << mid << endl;
}
cout << ans;

}