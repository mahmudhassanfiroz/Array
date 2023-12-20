
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
    cin>>size;

    int array[size];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    cout << " Before Sort : ";
    PrintArray(array, size);

    // Counting Sort
     // Step 1 : Max
     int max = INT_MAX;
     for(int i=0; i < size ; i++){
        if (array[i] > max ){
            max = array[i];
        }
     }

     // Step 2 : Initialization
     int count[max+1] ;
     for(int i = 0; i <= max; i++){
        count[i] = 0;
     }

     // Step 3 : Frequency Calculation
     for(int i = 0; i < size; i++){
        count[array[i]]++;
     }

    // Step 4 : Cumulative Sum Calculative
    for(int i = 1; i <= max; i++){
        count[i] += count[i-1];
    }

    // Step 5 : Final Array // Backward traversal of Basic Array
    int final[size];
    for(int i = size-1; i >= 0; i--){
        count[array[i]]--;
        int k = count[array[i]];
        final[k] = array[i];
    } 

    cout << " After Sort : ";
    PrintArray(final, size);

    return 0;
}