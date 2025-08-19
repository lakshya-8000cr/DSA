// 🔹 Q2: Find the first negative integer in every window of size K
// Input: [12, -1, -7, 8, -15, 30, 16, 28], k = 3
// Output: [-1, -1, -7, -15, -15, 0]
// 📍 Topic: Track element inside window using queue or list.

#include<iostream>
// #include<string> 
#include<vector>

using namespace std ;

class Solution {
    public:

    vector<int> FirstNegative(vector<int>&arr , int k){
        int n = arr.size();
        int FirstNegative = 0;
        vector<int>result ;

        for(int i=0; i<n-k; i++){
            for(int j = i ; j<i+k ; j++){
                if(arr[i]<0){
                    FirstNegative = arr[i];
                }
            }

            result.push_back(FirstNegative);
        }

        return result;
    }
    
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
   
    Solution obj;
    vector<int>res = obj.FirstNegative(arr , k);

    for(int i=0; i<n; i++){
        cout<<res[i]<<endl;
    }

    return 0 ;
}