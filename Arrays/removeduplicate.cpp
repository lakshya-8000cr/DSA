#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int flag = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = flag; 
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != flag) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.removeDuplicates(arr);

    return 0;
}
