#include<iostream>
#include<vector>
using namespace std ;

class Solution {
public:
    vector<int> intersection(vector<int>& arr, vector<int>& arr2, int n, int m) {
        vector<int> result;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i] == arr2[j]) {
                    result.push_back(arr[i]);   
                    break;  
                }
            }
        }
        return result;
    }
};



int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) cin >> arr2[i];

    Solution obj;
    vector<int> ans = obj.intersection(arr, arr2, n, m);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}


// for this unction logci is good but,we have to find the optimized soliution for this when we will run this on online coding platform 