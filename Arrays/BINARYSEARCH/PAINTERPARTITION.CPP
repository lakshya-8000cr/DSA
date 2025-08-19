#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool isPossible(vector<int>& arr, int k, int mid) {
        int painterCount = 1;
        int boardSum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) return false;

            if (boardSum + arr[i] <= mid) {
                boardSum += arr[i];
            } else {
                painterCount++;
                if (painterCount > k) return false;
                boardSum = arr[i];
            }
        }

        return true;
    }

    int MinimumTime(vector<int>& arr, int k) {
        int st = 0;
        int sum = 0;
        int n = arr.size();

        for (int i = 0; i<n; i++) {
            sum += arr[i];
        }

        int end = sum;
        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isPossible(arr, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    Solution obj;
    cout << obj.MinimumTime(arr, k);
    return 0;
}
