#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:
    
    void DescendingSort(vector<int>&arr , int n){
        for(int i=0; i<n-1; i++){

            int maxIndex = i;

            for(int j = i+1; j<n ; j++){
                if(arr[j]>arr[maxIndex]){
                    maxIndex = j;
                }
            }

            swap(arr[maxIndex] , arr[i]);
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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Solution obj;
    obj.DescendingSort(arr , n);
    return 0;
}