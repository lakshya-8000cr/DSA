// #include<iostream>
// #include<vector>
// using namespace std ;

// class Solution {
//     public :

//     void MoveZero(vector<int>&arr , int n){
//         int j = 0;
//         for(int i=0; i<n ; i++){
//             if(arr[i]!=0){
//                 arr[j++] = 0;
//             }
//         }

//         while(j<n){
//              arr[++j] = 1;
//         }

//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main(){
//     int n;
//     cin>>n ;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     Solution obj ;
//     obj.MoveZero(arr , n);
//     return 0;
// }

// same question solved in just minute by sorting


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;

// class Solution {
//     public :

//     void MoveZero(vector<int>&arr , int n){
//           sort(arr.begin() , arr.end()) ;

//           for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//           }

//     }
// };

// int main(){
//     int n;
//     cin>>n ;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     Solution obj ;
//     obj.MoveZero(arr , n);
//     return 0;
// }

//using this apprach ye dono approaches hi hamari time and space comlexity badhati hai 
// so now we need to find some other appraoches 
//lets use sapping appraoch;

#include<iostream>
#include<vector>
using namespace std ;

class Solution {
    public :

    void MoveZero(vector<int>&arr , int n){

         int j = n-1;

         int i = 0;

         while(j>i){
            if(arr[i]==0){
                i++;
            }else if(arr[j]==1){
                j--;
            }else{
                swap(arr[i] , arr[j]) ;
                i++;
                j--;
            }
         }

         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
         }

    }
};

int main(){
    int n;
    cin>>n ;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Solution obj ;
    obj.MoveZero(arr , n);
    return 0;
}

// this solution we called this two pointer approach