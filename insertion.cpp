
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

    cout<<"Given Array: ";
    printArray(array, size);

 
    int pos;
    cout << "Position of the Insertion: ";
    cin >> pos;
    cout<< "Value of the Insertion: ";

    int value;
    cin >> value;
    if (pos < 0 || pos > size){
        cout << "Invalid Position!";
    } 
    else{
        // Size-1 -----> pos
        // for(int i = size-1; i > pos; i--){
        //     array[i+1] = array[i];
        // }
        // array[pos] = value;
        /*
        We can also use two pointers to solve this problem in O(n) 
        time complexity.
        */
       array[size] = array[pos];
       array[pos] = value;

    }
    cout << "\nModified Array after insertion at position "<<pos<<": \n";
    printArray(array, size + 1);


    return 0;
}