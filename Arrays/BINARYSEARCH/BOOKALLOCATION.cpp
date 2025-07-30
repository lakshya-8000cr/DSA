#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    bool isPossible(vector<int>&arr , int n , int m , int mid){
        int StudentCount = 1;
        int PageSum = 0;

        for(int i=0; i<m; i++){
            if(PageSum <=mid){

                PageSum +=arr[i];
            }
            else{
                StudentCount++;
                if(StudentCount>m || arr[i]>mid){
                    return false ;
                }
            }
        }

        return true;
    };

    int BookAllocate(vector<int>&arr , int n , int m ){
        int st = 0;
        int sum = 0;
        for(int i=0; i<n ; i++){
            sum += arr[i];
        }

        int end = sum ;
        int mid = st + (end - st)/2;
        int ans ;
        while(st<=end){
             if(isPossible(arr , n , m , mid)){
                ans = mid ;
                end = mid - 1;
             }
             else{
                st = mid + 1;
             }

             mid = st +(end -st)/2;
        }
    }
};