// // WHAt is INT_MIN = we know there is a raneg of integer so in int min it stores minimum value and in maximum it shtores maximum value  INT_MAX ;

// #include<iostream>
// #include<climits>
// using namespace std ;

// int getMax(int arr[] , int size){

//     int max = INT_MIN ;
//     // predifined fuction of the max :: max = max(max,arr[i]) / ye niceh lopp ka kam ek line me a gaya ;
//     for(int i=0; i<size; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }

//     return max; 
// }

// int getMin(int arr[] , int size){

//     int min= INT_MAX ;
//     // predeined function of the minimum  :: min = min(min,arr[i]) / ye nice loop ka kam ek line me kar diya 
//     for(int i=0; i<size; i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }

//     return min ;
// }

// int main(){
//    int size ;
//    cin>>size ;

//    int arr[1000];
//    for(int i=0; i<size; i++){
//     cin>>arr[i];
//    }

//    cout<<getMax(arr,size)<<endl;
//    cout<<getMin(arr,size);
//    return 0;
// }


// // predefined function of the maximum and minimum ;
// // array can be updated inside the fucntion also  ( because i case of arrya we give adress of the array to function)
// // but in case of the variable hum copy banate hai variable ki fucntion me  


#include<iostream>
using namespace std ;

bool Search(int arr[] , int size , int sear){
 
    for(int i=0; i<size; i++){
        if(sear==arr[i]){
            return 1;
        }
    }

    return 0;

};


int main(){
    int n ;
    cin>>n; 
    int arr[1000];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sear;
    cin>>sear;

    bool found = Search(arr,n,sear) ;
    if(found){
        cout<<"element found";
    }else{
        cout<<"Not found";
    }

    return 0;
}