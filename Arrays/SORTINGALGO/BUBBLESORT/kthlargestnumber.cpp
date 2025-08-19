#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    int KthLargest(vector<int>&arr , int k){
        int n = arr.size();
        int ans = 0;

        for(int i=0; i<k; i++){
            for(int j = 0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }

        return arr[n-k];
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k ;
    cin>>k;

    Solution obj;
    cout<<obj.KthLargest(arr ,k);
    return 0;
}