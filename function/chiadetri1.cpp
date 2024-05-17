#include <iostream>
#include <unordered_set>
using namespace std;

bool findPairWithSumX(int arr[], int n, int x) {
    unordered_set<int> complements;

    for (int i = 0; i < n; i++) {
        int complement = x - arr[i];
        if (complements.find(arr[i]) != complements.end()) {
            return true;
        }
        complements.insert(complement);
    }

    return false;
}

int main() {
    int arr[] = {1, 4, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    if (findPairWithSumX(arr, n, x)) {
        cout << "Ton tai hai phan tu trong mang co tong bang " << x << endl;
    } else {
        cout << "Khong ton tai hai phan tu trong mang co tong bang " << x << endl;
    }

    return 0;
}