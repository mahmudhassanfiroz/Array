#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int array[], int x, int lb, int ub){
    if(lb == ub){
        int mid = (lb+ub)/2;
        // x == array[mid]
        if(x == array[mid]) return mid;   // Center 

        // x > array[mid]
        else if (x > array[mid]) BinarySearch(array, x, mid+1, ub);  // Right
        

        // x < array[mid]
        else BinarySearch(array, x, lb, mid-1);  // Left

    }
    else return -1;
}

int main(){

    int size;
    cin >> size;

    int array[size];
    for (int i = 0 ; i < size ; i++){
        cin >> array[i] ;
    }

    int checkvalue;
    cout << "Please enter the value you want to search: ";
    cin >> checkvalue;

    int indexNumber;
    indexNumber=BinarySearch(array,checkvalue,0,size-1);
    // If element is not present in array
    if(indexNumber==-1) {cout<<"Element is not present in array"<<endl;}
    // If element is present at indexNumber
    else{cout<<"Element is present at index "<<indexNumber<<endl;}
    



    return 0;
}