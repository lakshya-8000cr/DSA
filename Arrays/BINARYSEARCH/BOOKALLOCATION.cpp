#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public:

    bool isPossible(vector<int>&arr , int n, int m , int mid){
        int studentCount = 1;
        int pageSum = 0;

        for(int i=0; i<n; i++){
            // studentCount = 1;
            // pageSum += arr[i];

            if(arr[i]>mid){
                return false ; // if pehle hi bada hia then also return false 
            }
            if(pageSum + arr[i] <= mid){
                pageSum += arr[i]; // agar arr[i]less hai mid se toh combine kar lena toh pagesum me add karte raho 
            }
            else{
                studentCount++; // check karo ki student count > m hai ki ni agar hai toh false return karo nahi toh pagesum me arr[i] daldo 
                pageSum = arr[i]; 
                if(studentCount>m){
                    return false; 
                }
            }
        }

        return true;
    }

    int BinarySearch(vector<int>&arr , int n , int m){
        int st = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        int end = sum ;
        int mid = st + (end - st)/2;
        int ans = 0;

        while(st<=end){
            if(isPossible(arr , n , m , mid)){
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
};


int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int m ;
    cin>>m;

    Solution obj;
    cout<<obj.BinarySearch(arr , n , m);
    return 0;
}