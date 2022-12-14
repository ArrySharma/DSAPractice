#include<iostream>
using namespace std;

int firstlastarray(int arr[], int size, int k){
    int i = 0;
    int j = size - 1;

    while(arr[i] != k){
        if(i == size-1){
            return -1;
        }
        i++;
    }
    while(arr[j] != k){
        if (j == 0){
            return -1;
        }
        j--;
    }
    cout<< i << " " << j ;
}
int binaryfl(int arr[], int size, int k){
    int i = 0;
    int j = size - 1;

    while(i<=j){
        int m = (i + j)/2;
        if(arr[m] < k){
            i =  m + 1;
        }   

        else if(arr[m] > k){
            j = m - 1;
        } 
                
        else{
            while(arr[m] == k && m >= 0){
                m--;
            }
            m++;
            i = m;
            while(arr[m] == k && m <= size-1){
                m++;
            }
            m--;
            j = m;
            break;
        }
    }
    cout << endl;
    cout << i << " " << j;
}

int startocc(int arr[], int size, int k){

    int i = 0;
    int j = size - 1;
    int ans = -1;
    int mid = (i + j)/2;
    while(i <= j){
        

        if(arr[mid] == k){
            ans = mid;
            j = mid - 1;
        }
        else if(k > arr[mid]){
            i = mid + 1;
        }
        else if(k < arr[mid]){
            j = mid - 1;
        }
        mid = i + (j - i)/2;
    }
    return ans;
}
int lastocc(int arr[], int size, int k){

    int i = 0;
    int j = size - 1;
    int ans = -1;

    while(i <= j){
        int mid = (i + j)/2;

        if(arr[mid] == k){
            ans = mid;
            i = mid + 1;
        }
        else if(k > arr[mid]){
            i = mid + 1;
        }
        else if(k < arr[mid]){
            j = mid - 1;
        }
        mid = i + (j - i)/2;
    }
    return ans;
}



int main (){


    int arr[10] = {0,0,0,2,2,2,2,2,2,3};

    int a = startocc(arr, 10, 0);
    int b = lastocc(arr, 10, 0);
    cout << a << " " << b;
}