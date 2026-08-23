#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high - 1 && arr[i] <= pivot) {
            i++;
        }

        while (j >= low + 1 && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[low], arr[j]);
    return j;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int pivotIndex = partition(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}

int main() {
    int n;
    std::cout << "Enter number of elements: " << std::flush;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Number of elements must be positive.\n";
        return 1;
    }

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " elements: " << std::flush;
    for (int& element : arr) {
        std::cin >> element;
    }

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int element : arr) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}