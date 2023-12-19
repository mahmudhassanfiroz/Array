
#include<bits/stdc++.h>

using namespace std;

void PrintArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){

    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    // Create an empty array with a given size
    int arr[size];
    cout << "\nElements in the array are:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    cout << "Before Sort : ";
    PrintArray(arr, size);
    cout << endl;

    // Sorting using Bubble sort algorithm
    for(int i = 1; i < size; i++){
        int flag = 0;
        cout << "Iteration No: " << i << endl;
        // for(int j = 0; j <= size-1; j++){
        for(int j = 0; j <= size-i; j++){
            if(arr[j] > arr[j+1]){
                // Swapping arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }

            PrintArray(arr, size);
        }
        
        cout << endl;
        if(flag == 0) break;
    }

    cout << "After Sort : ";
    PrintArray(arr, size);
    cout << endl;

    return 0;
}