#include<iostream>
#include<vector>

using namespace std;

class Solution {
public :

    vector<int> BubbleSort(vector<int>&arr , int n){
        for(int i = 1; i<n ; i++){
            for(int j = 0 ; j<n-i ; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j] , arr[j+1]);
                }
            }
        }
        
        
       return arr;
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

    vector<int>result = obj.BubbleSort(arr , n);

    for(int i=0; i<n; i++){
        cout<<result[i]<<" ";
    }

   return 0;
}