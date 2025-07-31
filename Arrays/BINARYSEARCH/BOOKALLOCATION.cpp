#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    bool isPossible(vector<int>&arr , int n , int m , int mid){
        int StudentCount = 1;
        int PageSum = 0;

        for(int i=0; i<n; i++){
            if(arr[i]>mid){
               return false ;
            }
            if(PageSum + arr[i]<=mid){

                PageSum +=arr[i];
            }
            else{
                StudentCount++;
                PageSum = arr[i];
                if(StudentCount>m){
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
    int m ;
    cin>>m;

    Solution obj;
    
    cout<<obj.BookAllocate(arr , n , m);
    return 0;
}