#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    void Sort012(vector<int>&arr , int n){ 
         int mid = 0;
         int low = 0;
         int high = n-1;

         while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[high]);
                high--;
                // mid++;
            }
         }

         for(int i=0; i<n; i++){
            cout<<arr[i]<<" "; 
         }
    }
};

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }

    Solution obj;
    obj.Sort012(arr , n);
    return 0;
}