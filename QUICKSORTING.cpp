#include<iostream>
using namespace std;

int partition(int arr[], int st, int end) {
    int idx = st - 1;
    int pivot = arr[end];
    for (int j = st; j < end; j++) {  
        if (arr[j] < pivot) {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);  
    return idx;
}

void quicksort(int arr[], int st, int end) {
    if (st < end) {
        int pividx = partition(arr, st, end);
        quicksort(arr, st, pividx - 1);
        quicksort(arr, pividx + 1, end);
    }
}

int main() {
    // INPUT SIZE OF 10..
    int arr[10] = {4, 9, 2, 6, 1,99,56,90,76,69};
    int n = sizeof(arr) / sizeof(int);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}
