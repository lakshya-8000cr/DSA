#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Solution {

    public:

    int largestconsecutive(vector<int>&arr , int k){
        int n = arr.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int zeroes = 0;

        while(r<n){
            zeroes = 0;
            if(arr[r] == 0){
                zeroes++;
            }
            if(zeroes<=k){
                    int len = r - l + 1;
                    maxlen = max(maxlen , len);
                }
            else{
                    l = r - 1;
                }

            r++;
        }

        return maxlen;
    }
};

int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k = 2;

    Solution obj;
    cout<<obj.largestconsecutive(arr , k);

    return 0;
}