#include <iostream>
#include <vector>

void MergeSort(int low, int high, int mid, std::vector<int>& arr) {
    std::vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    for (int index = low; index <= high; index++) {
        arr[index] = temp[index - low];
    }
}

void mergeSort(std::vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    MergeSort(low, high, mid, arr);
}
//  ye toh  bus check karne ke liye likha hai main logicc is above it 
int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "The number of elements cannot be negative.\n";
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for (int& element : arr) {
        std::cin >> element;
    }

    mergeSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int element : arr) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}