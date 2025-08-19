#include<iostream>
#include<vector>

using namespace std ;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[13] = {0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        if(hash[i]>0){
            cout<<i<<":"<<hash[i]<<endl; // this the part where we are doing the 
        }
    }

    // cout<<hash[2];
    return 0;
}

// time complexity = O(n+n+n);