// search in rotated array me main thing ye hia ki ekrpah banao pehle froi dekho konso line me hai apna element then use conditions ;
// first find pivoit and then decide ki kis part me binary search karna hai 
// then do binary search oin that code;

#include<iostream>
#include<vector>

using namespace std ;

class Solution {
    public:

    int BinarySearch(vector<int>&arr , int s , int e , int tar){
        int st = s;
        int end = e;
        int mid = st + (end - st)/2;
        int ans = -1;

        while(st<=end){
            if(arr[mid]>=tar){
                ans = mid ;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
            mid = st + (end - st)/2;
        }

        return ans ;

    }

    
    int Pivot(vector<int>&arr , int n){
        int st = 0;
        int end = n - 1;
        int mid = st + (end - st)/2;
    
        while(st<end){
            if(arr[mid]>=arr[0]){
                st = mid + 1;
            }
            else{
                end = mid ;
            }
            mid = st + (end -st)/2;
        }

        return st;
    }


    int SearchInRotatedArray(vector<int>&arr , int n , int k){
        
        int pivot = Pivot(arr , n);

          if(k>=arr[pivot] && k<=arr[n-1]){
            return BinarySearch(arr , pivot , n-1 , k);
          }
          else{
            return BinarySearch(arr , 0 , pivot - 1 , k);
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

    int k;
    cin>>k;

    Solution obj;
    cout<<obj.SearchInRotatedArray(arr , n , k);
    return 0;
}

