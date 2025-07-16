#include<iostream>
#include<vector>
#include<climits>
using namespace std ;

class Solution{
   public :
   int currentmax = INT_MIN ;
   int Max(vector<int>nums,int n){
        n = nums.size();
       for(int i = 0; i<n; i++){
         if(nums[i]>currentmax){
           currentmax = nums[i];
          }
        }
        return currentmax ;
    }

};


int main(){
  int n ;
  cin >> n;
   vector<int>nums(n);
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
   Solution obj ;
   int result = obj.Max(nums,n);
   cout<<result;
}

