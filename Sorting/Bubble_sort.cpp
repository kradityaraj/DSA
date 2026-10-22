#include<bits/stdc++.h>
using namespace std;

// Function for selection sort
void bubble_sort(vector<int>& arr,int n) {
    for(int i=1;i<n;i++) {
        int didswap=0; // Applying optmization on bubble sort
        for(int j=0;j<n-i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                didswap++;
            }
        }
        if(didswap==0) break;
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

    // Calling the bubble sort function
    bubble_sort(arr,n);

    // Printing the sorted array.
    cout << "Printing sorted Array :- ";
    for(auto it:arr) cout << it << " ";
    cout << "\n"; 

    return 0;
}