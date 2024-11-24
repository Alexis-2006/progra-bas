#include <iostream>
#include <vector>
using namespace std;
void rotateArray(std::vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    k = k % n; 

   vector<int> rotated(n);

    for (int i = 0; i < n; ++i) {
        rotated[(i + k) % n] = arr[i];
    }

    arr = rotated;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    rotateArray(arr, k);

    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}