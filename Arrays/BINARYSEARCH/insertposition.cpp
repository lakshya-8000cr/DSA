//position to keep the array sorted 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Solution {
    public :

    int firstindex(vector<int>&arr , int n , int tar){
        int st = 0 ;
        int end = n - 1;
        int ans  ;

            while(st<=end){
                int mid = st + (end - st)/2;

                if(arr[mid]>tar){
                    ans = mid ;
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
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

    int tar ;
    cin>>tar;

    Solution obj;
    cout << obj.firstindex(arr , n , tar);
    return 0;
}