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

    pair<int , int>  FirstIndex(vector<int>&arr , int n , int tar){
        int st = 0;
        int end = n -1;
        int first  ;
        int last ;

        while(st<=end){
            int mid = st + (end - st)/2;
            if(arr[mid]==tar){
               first = mid;
               end = mid - 1;
            }
            else if(arr[mid]>tar){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
            
            mid = st + (end - st)/2;
        }

        st = 0;
        end = n - 1;

        while(st<=end){

            int mid = st + (end - st)/2;

            if(arr[mid]==tar){
               last = mid;
               st = mid + 1;
            }
            else if(arr[mid]>tar){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
            
            mid = st + (end - st)/2;
        }

        return {first,last};

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

    pair<int , int>result = obj.FirstIndex(arr , n , tar);
    cout <<result.first<<endl;
    cout<<result.second;
    return 0;
}