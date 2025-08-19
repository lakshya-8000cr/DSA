#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    int MaxPointsFromCards(vector<int>&arr , int k){
        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;
        int n = arr.size();

        for(int i=0; i<k; i++){
            lsum += arr[i];
        }

        int rigthindex = n - 1;
        int ans = 0 ;
        
        for(int i = k-1; i>=0; i--){
            lsum -= arr[i];
            rsum += arr[rigthindex];
            rigthindex--;

            ans = lsum + rsum ;

            maxsum = max(maxsum , ans);
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

    int k = 8;
    
    Solution obj;
   cout<<obj.MaxPointsFromCards(arr , k);
   return 0;
}