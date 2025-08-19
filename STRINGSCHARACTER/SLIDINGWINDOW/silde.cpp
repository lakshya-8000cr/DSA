#include<iostream>
#include<string>
#include<vector>

using namespace std ;

class Solution {
    public:

    int SlideWindow(vector<int>&arr , int k){ //  here k is representating how many numbers of sum we needed 
          int n = arr.size();
          int windowSum = 0;
          int maxSum = 0;

    
          // we will create the window sum to slide the window 
          for(int i=0; i<k; i++) { // we used k here because we want only sum of those elements 
              windowSum += arr[i]; //  we created the window Sum for the start
          }

         // this is where we thought fr now that window sum is maximum;
         maxSum = windowSum ;

         for(int i = k; i<n; i++){
             windowSum += arr[i] - arr[i-k];
             if(windowSum>maxSum){
                maxSum = windowSum;
             }
         }

         return maxSum;
    }
};


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k = 3;

    Solution obj;
    cout<<obj.SlideWindow(arr , k);
    return 0;
}