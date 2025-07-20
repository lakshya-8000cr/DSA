#include<iostream>
using namespace std ;

int reverse(int arr[] , int n ){
    int st = 0;
    int end = n-1;

    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return {}; 
};

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reverse(arr,n);
    return 0;
}