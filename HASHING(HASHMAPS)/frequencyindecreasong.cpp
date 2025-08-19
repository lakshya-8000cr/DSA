#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[13] = {0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j = i+1; j<n; j++){
            if(hash[j]>hash[minindex]){
                minindex = j;
            }
        }

        swap(hash[minindex] , hash[i]);
    }

    for(int i=0; i<n; i++){
        if(hash[i]>0){
        cout<<i<<":"<<hash[i]<<endl;
        }
    }

    // cout<<index<<":"<<max;
    return 0;
}
