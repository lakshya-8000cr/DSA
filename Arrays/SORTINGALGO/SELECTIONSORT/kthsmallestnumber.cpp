#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    int KthOrder(vector<int>&arr ,  int k){
        int n = arr.size();
        for(int i=0; i<k; i++){
            int minIndex = i;
            for(int j = i +1 ; j<n ; j++){
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }

            swap(arr[minIndex] , arr[i]);
        }
        return arr[k-1];
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
    cout<<obj.KthOrder(arr , k);

    return 0;   
}