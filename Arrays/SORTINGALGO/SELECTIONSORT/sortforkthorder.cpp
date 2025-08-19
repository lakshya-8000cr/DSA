#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    vector<int> KthOrder(vector<int>&arr ,  int k){
        for(int i=0; i<k; i++){
            int minIndex = i;
            for(int j = i +1 ; j<k ; j++){
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }

            swap(arr[minIndex] , arr[i]);
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

    int k;
    cin>>k;

    Solution obj;
    vector<int>result = obj.KthOrder(arr, k);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;   
}