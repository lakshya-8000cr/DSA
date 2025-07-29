// Floor and Ceil
// Q: Floor = largest ≤ target, Ceil = smallest ≥ target
// Input: arr = [2, 4, 6, 8], target = 5
// Output: Floor = 4, Ceil = 6

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Solution {
    public :

    pair<int , int> firstindex(vector<int>&arr , int n , int tar){ 
        int st = 0 ;
        int end = n - 1;
        int ceil = -1 ;
        int floor = -1;
        
        while(st<=end){
            int mid = st + (end - st)/2;

            if(arr[mid]<=tar){
                floor = arr[mid];
                st = mid + 1;
            }

            else if(arr[mid] >= tar){
                ceil = arr[mid] ;
                end = mid - 1;
            }

        }

        return {floor,ceil} ;
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
    pair<int , int> result = obj.firstindex(arr , n , tar);
    cout << result.first <<result.second;
    return 0;
}

//you will all think what is pair in this pair<int , int>