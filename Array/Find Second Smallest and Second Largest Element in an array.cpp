#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n) {
    if(n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  // edge case when only one element is present in the array
    int largest = arr[n - 1];
    int slargest = INT_MIN;
    for(int i = n - 2; i >= 0; i--) { 
        if(arr[i] != largest) {
            slargest = arr[i];
            break;
        }
       
    }
    cout << "Second Largest is " << slargest << endl;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n);
    return 0;
}
