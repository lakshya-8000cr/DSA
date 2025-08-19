#include<iostream>
#include<vector>

using namespace std;

class Solution {
public :

    int BubbleSort(vector<int>&arr , int n){

        int count = 0;

        for(int i = 1; i<n ; i++){
            for(int j = 0 ; j<n-i ; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j] , arr[j+1]);
                    count++;
                }
            }
        }
        
        
       return count;
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

   cout<< obj.BubbleSort(arr , n);

   return 0;
}