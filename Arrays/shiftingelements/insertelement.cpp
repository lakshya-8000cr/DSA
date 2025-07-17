#include<iostream>
using namespace std ;

int main(){
    int n = 4;
    int arr[100] = {1,2,3,4};

    int k = 1;
    int x = 99;

    for(int i=n-1 ; i>=k ; i--){
        arr[i+1] = arr[i];
    }

    arr[k] = x;
    n++;

    for(int i=0;i<n; i++){
        cout<<arr[i]<<",";
    }
}