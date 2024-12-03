#include<iostream>
using namespace std;

//function to get the minimum element from the array
int get_min(int arr[], int size) {
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)  {
        if (arr[i] < mini)  {
            mini = arr[i];
        }
    }
    return mini;
}

//function to get the maximum element from the array
int get_max(int arr[], int size) {
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)  {
        if (arr[i] > maxi)  {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

//to take the input of the array
    for(int i=0; i<size; i++) {
        cout << "Enter the " << i+1 << "th" <<" element: "<< endl;
        cin >> arr[i];
    }

//to print the array
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "The maximim element is: " << get_max(arr, size) << endl;
    cout << "The minimum element is :" << get_min(arr, size) << endl;
    return 0;
}
