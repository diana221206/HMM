
#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int arr[] = { 34, 7, 23, 32, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Максимальне значення: " << findMax(arr, n) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    return min(arr[n - 1], findMin(arr, n - 1));
}

int main() {
    int arr[] = { 34, 7, 23, 32, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Мінімальне значення: " << findMin(arr, n) << endl;
    return 0;
}
