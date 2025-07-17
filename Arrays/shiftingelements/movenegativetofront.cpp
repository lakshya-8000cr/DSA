#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, -2, 3, -4, 5};

    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++; 
        }
    }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
