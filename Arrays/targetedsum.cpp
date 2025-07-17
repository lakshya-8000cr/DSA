#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    void targetSum(vector<int>nums,int n,int target){ 
         for(int i =0; i<n-1; i++){
             for(int j = i+1; j<n; j++){
                 if(nums[i]+nums[j]==target){ // this is the main logic of the question ;
                    cout<<nums[i]<<","<<nums[j];
                 }
             }
         }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int target ;
    cin>>target;

    Solution obj ;
    obj.targetSum(nums,n,target);
}