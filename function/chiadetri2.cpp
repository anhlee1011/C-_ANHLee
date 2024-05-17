#include <iostream>
#include <vector>
using namespace std;

void generatePermutations(vector<int>& permutation, vector<bool>& used, int n) {
    if (permutation.size() == n) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            permutation.push_back(i);
            generatePermutations(permutation, used, n);
            permutation.pop_back();
            used[i] = false;
        }
    }
}

void listPermutations(int n) {
    vector<int> permutation;
    vector<bool> used(n + 1, false);
    generatePermutations(permutation, used, n);
}

int main() {
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;

    cout << "Cac hoan vi cua tap {1, 2, ..., " << n << "} la:" << endl;
    listPermutations(n);

    return 0;
}