#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

class Solution{ 
    public:

    int BinarySearch( vector<int>&arr , int n , int tar){
        
        int st = 0;

        int end = n-1 ;

        int mid = st + (end - st)/2;

        while(st<=end){
            if(arr[mid] == tar){
                return mid ;
            }

            if(arr[mid]>tar){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }

            mid = st + (end-st)/2;
        }

        return {};
    }

};

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int tar;
    cin>>tar;

    sort(arr.begin() , arr.end());

    Solution obj; 
    cout<<obj.BinarySearch(arr , n , tar); // will give sorted array index according to the sorted array 

    return 0;

}