#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    int PeakElement(vector<int>&arr , int n){
        int st = 0;
        int end = n - 1;
        int mid = st + (end - st)/2;
        int ans = -1;

        while(st<end){
            if(arr[mid]>arr[mid-1]){
                ans = mid ;
                st = mid + 1;
            }
            else{
                end = mid;
            }
            mid = st + (end - st)/2;
        }

        return ans ;

    }
};


int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Solution obj;
    cout<<obj.PeakElement(arr , n);
    return 0;

}