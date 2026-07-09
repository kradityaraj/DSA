#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter element of an Array :- ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "Array is sorting using bubble sort. \n";
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }

    cout << "Printing sorted Array :- ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n"; 

    return 0;
}