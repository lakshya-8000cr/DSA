#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    void removeDuplicate(vector<int>nums,int n){
        int flag = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
            if(nums[i]==nums[j]){
               nums[j]=flag ;
            }
        }
        }

        for(int i=0; i<n; i++){
            if(nums[i]!=flag){
              cout<<nums[i];
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
     Solution obj ;
     obj.removeDuplicate(nums,n);
     return 0;
}