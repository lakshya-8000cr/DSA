// in this sorting we do different rounds in whihc we swap smallest element of array with first index of array ;
//and generally we d rounds till n - 1;

#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    void SelectionSort(vector<int>&arr , int n){
        for(int i=0; i<n-1 ; i++){
            int min = i;
            for(int j = i+1; j<n ; j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }

            swap(arr[min] , arr[i]);
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
    obj.SelectionSort(arr , n);
    return 0;
}