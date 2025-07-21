#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    int Occurence(vector<int>& nums,int n, int x){
        int count = 1;
        for(int i=0; i<n-1; i++){
          if(nums[i]==x){
            count++;
          }
        }

        return count ;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n ;i++){
        cin>>nums[i];
    }
    int x ;
    cin>>x;

    Solution obj ;
    int result = obj.Occurence(nums,n,x);
    cout<<result;
    return 0;
}