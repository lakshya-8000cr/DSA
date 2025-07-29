#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    int Pivot(vector<int>&arr , int n){
        int st = 0;
        int end = n - 1;
        int mid = st + (end - st)/2;
        // int ans = -1;

        while(st<end){
            if(arr[mid]>=arr[0]){
                st = mid + 1;
            }
            else{
                end = mid;
            }
            mid = st + (end - st)/2;
        }

        return st ;
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
    cout<<obj.Pivot(arr , n);
    return 0;
}