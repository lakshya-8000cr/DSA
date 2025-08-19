// int this we will include very very important alogrithms stl
// like you know binary search algo so you can include these types of also jisme itni mehnat ni karni padegi likhen me 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Is 5 availabke : ? (if 1 then yes if 0 then no) : "<<binary_search(arr.begin() , arr.end() , 5);
    // swap(arr.begin() ,arr.end());
        
    reverse // rotate etc hai sba 
}