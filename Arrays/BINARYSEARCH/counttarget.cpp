#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Solution {
    public:

    int occurence(vector<int>&arr , int n, int tar){
        int st = 0;
        int end = n -1 ;
        int count = 0;

        while(st<=end){
            int mid = st + (end - st)/2;
            if(arr[mid] == tar){
                count = 1;

                int left = mid - 1;
                for(int i = left ; i>=0; i--){
                    if(arr[i] == tar){
                        count++;
                    }
                } // traverse the full array of left side;

                int right = mid + 1;
                for(int i = right ; i<n ;i++){
                    if(arr[i] == tar){
                        count++;
                    }
                } // traverse the full array rigth side ;

                break ;
            }

            else if(arr[mid]>tar){
                end =  mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        return count;
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
    cout<<obj.occurence(arr , n , tar);
    return 0 ;
}