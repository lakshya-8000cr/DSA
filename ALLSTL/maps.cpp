//maps ke case me hum key value pari me data save karte hai wo bhi ordered sorted , 
//every key has unique value 

#include<iostream>
#include<map>
using namespace std ;

int main(){
    map<int , string> m;

    m[1] = "Lakshya";
    m[2] = "Love";
    m[3] = "mercedes";
    m[4] = "Very Much";

    for(auto i : m){ 
        cout<<i.first<<":"<<i.second<<endl; // first se interger print hora hai second se string print // time complexity is O(logn);
    }

    return 0;
}
 