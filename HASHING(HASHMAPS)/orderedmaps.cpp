#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    map<int , int> hash ;

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    // for(auto ite : hash){
    //     cout<<ite.first<<":"<<ite.second<<endl;
    // }

    for(int i=1; i<=n; i++){
        cout<<i<<":"<<hash[i]<<endl;
    }

    return 0;
}