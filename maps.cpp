#include<iostream>
using namespace std;
map<int,int> mapInsert(int arr[], int n){
    map<int, int>mp;
    //Insert arr[i] as key and i as value
    for(int i=0;i<n;i++){
        // mp[key] = value
        mp[arr[i]] = i;
    }
    return mp;
}

void mapDisplay(map<int,int>mp){
    // Print every key and value pair in a new line
    map<int,int>:: iterator it;

    for(it = mp.begin(); it!=mp.end();it++){

    }
}

void mapErase(map<int,int>mp){
}
int main(){
delta plc
return 0;
}