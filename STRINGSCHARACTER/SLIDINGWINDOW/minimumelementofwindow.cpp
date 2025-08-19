// thsi question will be Solved from pattern 2 

#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    int maxLen(vector<int>&arr , int k){
        int n = arr.size();
        int l = 0;
        int r = 0;
        int sum = 0;
        int maxlen = 0;

        while(r<n){

            sum += arr[r];

            while(sum>k){ 
                sum -= arr[l]; // we added this condition for shrinking the array or incrementingthe left most element index
                l++;
            }

            if(sum<=k){
                maxlen = max(maxlen , r - l + 1);
            }
            r++;

        }

        return maxlen;
    }

};

int main(){

    int n;

    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k = 14;

    Solution obj;
    cout<<obj.maxLen(arr , k);
    return 0;

}