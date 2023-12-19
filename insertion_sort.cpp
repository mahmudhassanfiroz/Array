

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

    // Sorting using Insertion sort algorithm
    for (int i = 1; i < size; i++){
        int key = arr[i];
        cout << endl << "i : " << i <<  " Key: " << key;
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            PrintArray(arr, size);
            j--;
        }
        arr[j + 1] = key;
        PrintArray(arr, size);

    }

    cout << endl;

    cout << "After Sort : ";
    PrintArray(arr, size);
    cout << endl;

    return 0;
}