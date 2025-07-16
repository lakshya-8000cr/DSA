#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    void moveZero(vector<int>nums,int n){
        int j=0;

        for(int i = 0; i<n ;i++){
            if(nums[i]!=0){
                nums[j++] = nums[i];
            }
        }

        while(j<n){
            nums[j++] = 0;
        }

        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
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
    obj.moveZero(nums,n);
    return 0;
}