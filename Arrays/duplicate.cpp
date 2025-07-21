#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:
    
    int Unique(vector<int>& arr){

        int ans = 0;  

        int n = arr.size();

        for(int i=0; i<n;i++){
           ans = ans ^ arr[i];
        }

        for(int i=1 ; i<n; i++){
            ans = ans ^ i ;
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

    Solution obj;

    cout<<obj.Unique(arr);
     
    return 0 ;
}