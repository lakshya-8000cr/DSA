// Upper Bound
// Q: Find the first index where arr[i] > target
// Input: arr = [1, 2, 4, 4, 5], target = 4
// Output: 4

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Solution {
    public :

    int firstindex(vector<int>&arr , int n , int tar){
        int st = 0 ;
        int end = n - 1;
        int ans = -1 ;
        
        while(st<=end){
            int mid = st + (end - st)/2;

            if(arr[mid] > tar){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid]>tar){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
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

    int tar ;
    cin>>tar;

    Solution obj;
    cout << obj.firstindex(arr , n , tar);
    return 0;
}