#include<bits/stdc++.h>
using namespace std;

// Function for selection sort
void insertion_sort(vector<int>& arr,int n) {
    for(int i=1;i<n;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
            else break;
        }
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

    // Calling the insertion sort function
    insertion_sort(arr,n);

    // Printing the sorted array.
    cout << "Printing sorted Array :- ";
    for(auto it:arr) cout << it << " ";
    cout << "\n"; 

    return 0;
}