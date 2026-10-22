#include<bits/stdc++.h>
using namespace std;

// Function for selection sort
void selection_sort(vector<int>& arr,int n) {
    for(int i=0;i<n;i++) {
        int mini=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[mini],arr[i]);
    }
}

int main() {
    // Taking the size of vector
    int n;
    cout << "Enter size of an Array : ";
    cin >> n;

    vector<int> arr(n);
    // Taking input for vector
    cout << "Enter element of an Array :- ";
    for(auto &it:arr) cin >> it;

    // Calling the selection sort function
    selection_sort(arr,n);

    // Printing the sorted array.
    cout << "Printing sorted Array :- ";
    for(auto it:arr) cout << it << " ";
    cout << "\n"; 

    return 0;
}