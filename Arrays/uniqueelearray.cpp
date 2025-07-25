#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    int ans = 0;  
    int Unique(vector<int>& arr){
        int n = arr.size();
        for(int i=0; i<n;i++){
            ans = ans ^ arr[i];
        }
        return ans ;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(1000);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Solution obj;

    cout<<obj.Unique(arr);
     
    return 0 ;
}