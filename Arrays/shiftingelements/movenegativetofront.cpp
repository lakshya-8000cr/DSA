#include<iostream>
using namespace std ;

int main(){
    int n = 5;
    int arr[n]={1,-2,3,-4,5};

    int j = 0;
    int i = 0;
    int k = n-1;
    while(j<n){
        if(arr[n]<0){
            arr[j++] = arr[k];
            k--;
        }
    }
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}