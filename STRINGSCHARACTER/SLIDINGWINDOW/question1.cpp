// 🔹 Q1: Find maximum sum of subarray of size K
// Input: [2, 1, 5, 1, 3, 2], k = 3
// Output: 9 (window: [5, 1, 3])
// 📍 Topic: Learn how to slide and calculate sum efficiently.

#include<iostream>
#include<vector>
#include<string>

using namespace std ;

class Solution {
    public:

    int MaxSum(vector<int>&arr , int k){
        int n = arr.size();
        int windowsum = 0;
        int maxsum = 0;

        for(int i=0; i<n; i++){
            windowsum += arr[i];
        }

        maxsum = windowsum;
        // now we will traverse the array 
        for(int i = k; i<n; i++){
            windowsum += arr[i] - arr[i-k];
            if(windowsum>maxsum){
                maxsum = windowsum;
            }
        }

        return maxsum;
    }
};


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    Solution obj;
    cout<<obj.MaxSum(arr , k);
    return 0;
}