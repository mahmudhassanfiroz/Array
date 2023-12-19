

#include<bits/stdc++.h>

using namespace std;

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

int main(){

    int array[50];

    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        cin >> array[i];
    }

    // cout<<"Given Array: ";
    // printArray(array, size);

 
    int pos;
    cout << "Position of the Deletion: ";
    cin >> pos;
    // cout<< "Value of the Deletion: ";
    // int value;
    // cin >> value;


    if (pos < 0 || pos > size-1){
        cout << "Invalid Position!";
    } 
    else{
        // Insertion
    //    array[size] = array[pos];
    //    array[pos] = value;

    // Deletion
    if(pos==size-1) size--;  // last position
    else{ // start od mid position
        // pos+1 ------> size-1
        for(int i = pos+1; i < size; i++){
            array[i-1] = array[i];
        }
        size--;
    }

    }
    cout << "\nModified Array after Deletion ";
    printArray(array, size );


    return 0;
}