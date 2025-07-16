#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    bool isSorted(vector<int> nums , int n){
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]>nums[j]){
                    return false;
                }
            }
        }
        return true;
    }

};


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n; i++){
        cin>>nums[i];
    }

    Solution obj ;
    int result = obj.isSorted(nums,n);
    cout<<result ;
    return 0;
}